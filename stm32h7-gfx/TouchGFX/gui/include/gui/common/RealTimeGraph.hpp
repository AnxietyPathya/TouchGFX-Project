#ifndef REALTIME_GRAPH_WIDGET_HPP
#define REALTIME_GRAPH_WIDGET_HPP

#include <touchgfx/widgets/Widget.hpp>

using namespace touchgfx;


class RealtimeGraphWidget : public touchgfx::Widget
{
public:
    RealtimeGraphWidget();

    virtual void draw(const touchgfx::Rect& invalidatedArea) const;
    virtual touchgfx::Rect getSolidRect() const;
    void addPoint(uint16_t value);    

private:

  void drawLineSize(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color, uint16_t size) const;
  void drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color) const;
  void drawPixel(int16_t x_pos, int16_t y_pos, uint16_t color) const;
  void drawFillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color) const;
  void drawVLine(int16_t x, int16_t y, int16_t h, uint16_t color) const;
  void dawHLine(int16_t x, int16_t y, int16_t w, uint16_t color) const;

  uint16_t line_size;

  uint16_t data_width;
  uint16_t data_height;
  uint16_t data_idx;
  uint16_t data_buf[1024];
};
#endif