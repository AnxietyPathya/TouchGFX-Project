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

void screenView::handleTickEvent()
{
  if (rtcGetInfo(&time_info))
  {
    digitalClock1.setTime24Hour(time_info.time.hours, time_info.time.minutes, time_info.time.seconds);
  }

}
