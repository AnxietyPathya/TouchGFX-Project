/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

screenViewBase::screenViewBase()
{
    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_GLASS_THEME_IMAGES_BACKGROUNDS_800X480_FLOATING_RINGS_ID));
    add(image1);

    digitalClock1.setPosition(234, 209, 332, 62);
    digitalClock1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    digitalClock1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3DQC));
    digitalClock1.displayLeadingZeroForHourIndicator(true);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_12_HOUR);
    digitalClock1.setTime12Hour(10, 10, 0, true);
    add(digitalClock1);
}

screenViewBase::~screenViewBase()
{

}

void screenViewBase::setupScreen()
{

}