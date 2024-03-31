#include <gui/screen_screen/screenView.hpp>


screenView::screenView()
{

}

void screenView::setupScreen()
{
    screenViewBase::setupScreen();
}

void screenView::tearDownScreen()
{
    screenViewBase::tearDownScreen();
}

void screenView::updateTime(rtc_info_t* p_time)
{
  if (p_time != NULL)
  {
    clock.setTime24Hour(p_time->time.hours, p_time->time.minutes, p_time->time.seconds);
    clock.invalidate();
  }
}

