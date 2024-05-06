#include "rtc.h"
#include <time.h>

bool rtcInit(void)
{
  bool ret = true;

  return ret;
}

uint8_t rtcDateSelectFromMonth(rtc_info_t *p_info)
{
  uint8_t day = p_info->date.day;
  return day;
}
