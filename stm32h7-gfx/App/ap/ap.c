#include "ap.h"


extern void touchgfxInit(void);
extern void touchgfxUpdate(void);



void apInit (void)
{
  cliOpen(_DEF_UART1, 57600);
  logBoot(false);

  touchgfxInit();	
}

extern uint32_t update_cnt;

void apMain (void)
{
	uint32_t pre_time;

	pre_time = millis ();
	while (1)
	{
		if (millis () - pre_time >= 500)
		{
			pre_time = millis ();
			ledToggle (_DEF_LED1);

		}
		
		cliMain();
			
		touchgfxUpdate();
	}
}


