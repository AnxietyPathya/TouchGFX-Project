// 4.23.2 0x09acd510
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_glass_theme_images_backgrounds_800x480_floating_rings[]; // BITMAP_GLASS_THEME_IMAGES_BACKGROUNDS_800X480_FLOATING_RINGS_ID = 0, Size: 800x480 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_glass_theme_images_backgrounds_800x480_floating_rings, 0, 800, 480, 0, 0, 800, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 480, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase