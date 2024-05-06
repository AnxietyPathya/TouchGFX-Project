#include "hw.h"








bool hwInit(void)
{
  char port_name[128] = "COM2";


  uartInit();
  rtcInit();
  if (uartOpenPort(HW_UART_CH_MAIN, (char *)port_name, 57600))
  {
    logPrintf("uartOpen() %s OK\n", port_name);
  }
  else
  {
    logPrintf("uartOpen() %s Fail\n", port_name);
  }
  eepromInit();
  
  return true;
}