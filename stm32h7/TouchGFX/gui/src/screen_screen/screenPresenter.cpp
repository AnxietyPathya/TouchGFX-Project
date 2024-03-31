#include <gui/screen_screen/screenView.hpp>
#include <gui/screen_screen/screenPresenter.hpp>

screenPresenter::screenPresenter(screenView& v)
    : view(v)
{

}

void screenPresenter::activate()
{

}

void screenPresenter::deactivate()
{

}

void screenPresenter::getTimeInfo(rtc_info_t* p_time)
{
    if (p_time != NULL)
    {
      info.time.hours = p_time->time.hours;
      info.time.minutes = p_time->time.minutes;
      info.time.seconds = p_time->time.seconds;

      view.updateTime(&info);
    }
}
