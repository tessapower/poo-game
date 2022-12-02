#include "Dude.h"

#include "Graphics.h"

void Dude::clampToWindow() {
  const int right = _x + _width;
  if (_x < 0) {
    _x = 0;
  } else if (right >= Graphics::ScreenWidth) {
    _x = (Graphics::ScreenWidth - 1) - _width;
  }

  const int bottom = _y + _height;
  if (_y < 0) {
    _y = 0;
  } else if (bottom >= Graphics::ScreenHeight) {
    _y = (Graphics::ScreenHeight - 1) - _height;
  }
}

void Dude::draw(Graphics& gfx) const {
  gfx.PutPixel(7 + _x, 0 + _y, 0, 0, 0);
  gfx.PutPixel(8 + _x, 0 + _y, 0, 0, 0);
  gfx.PutPixel(9 + _x, 0 + _y, 0, 0, 0);
  gfx.PutPixel(10 + _x, 0 + _y, 0, 0, 0);
  gfx.PutPixel(11 + _x, 0 + _y, 0, 0, 0);
  gfx.PutPixel(12 + _x, 0 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 1 + _y, 0, 0, 0);
  gfx.PutPixel(6 + _x, 1 + _y, 0, 0, 0);
  gfx.PutPixel(7 + _x, 1 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 1 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 1 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 1 + _y, 254, 221, 88);
  gfx.PutPixel(11 + _x, 1 + _y, 254, 221, 88);
  gfx.PutPixel(12 + _x, 1 + _y, 254, 221, 88);
  gfx.PutPixel(13 + _x, 1 + _y, 0, 0, 0);
  gfx.PutPixel(14 + _x, 1 + _y, 0, 0, 0);
  gfx.PutPixel(3 + _x, 2 + _y, 0, 0, 0);
  gfx.PutPixel(4 + _x, 2 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 2 + _y, 254, 221, 88);
  gfx.PutPixel(6 + _x, 2 + _y, 254, 221, 88);
  gfx.PutPixel(7 + _x, 2 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 2 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 2 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 2 + _y, 254, 221, 88);
  gfx.PutPixel(11 + _x, 2 + _y, 254, 221, 88);
  gfx.PutPixel(12 + _x, 2 + _y, 254, 221, 88);
  gfx.PutPixel(13 + _x, 2 + _y, 254, 221, 88);
  gfx.PutPixel(14 + _x, 2 + _y, 254, 221, 88);
  gfx.PutPixel(15 + _x, 2 + _y, 0, 0, 0);
  gfx.PutPixel(16 + _x, 2 + _y, 0, 0, 0);
  gfx.PutPixel(2 + _x, 3 + _y, 0, 0, 0);
  gfx.PutPixel(3 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(4 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(5 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(6 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(7 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(11 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(12 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(13 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(14 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(15 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(16 + _x, 3 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 3 + _y, 0, 0, 0);
  gfx.PutPixel(2 + _x, 4 + _y, 0, 0, 0);
  gfx.PutPixel(3 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(4 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(5 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(6 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(7 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(11 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(12 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(13 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(14 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(15 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(16 + _x, 4 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 4 + _y, 0, 0, 0);
  gfx.PutPixel(1 + _x, 5 + _y, 0, 0, 0);
  gfx.PutPixel(2 + _x, 5 + _y, 254, 221, 88);
  gfx.PutPixel(3 + _x, 5 + _y, 0, 0, 0);
  gfx.PutPixel(4 + _x, 5 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 5 + _y, 254, 221, 88);
  gfx.PutPixel(6 + _x, 5 + _y, 254, 221, 88);
  gfx.PutPixel(7 + _x, 5 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 5 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 5 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 5 + _y, 254, 221, 88);
  gfx.PutPixel(11 + _x, 5 + _y, 0, 0, 0);
  gfx.PutPixel(12 + _x, 5 + _y, 0, 0, 0);
  gfx.PutPixel(13 + _x, 5 + _y, 0, 0, 0);
  gfx.PutPixel(14 + _x, 5 + _y, 0, 0, 0);
  gfx.PutPixel(15 + _x, 5 + _y, 254, 221, 88);
  gfx.PutPixel(16 + _x, 5 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 5 + _y, 254, 221, 88);
  gfx.PutPixel(18 + _x, 5 + _y, 0, 0, 0);
  gfx.PutPixel(1 + _x, 6 + _y, 0, 0, 0);
  gfx.PutPixel(2 + _x, 6 + _y, 0, 0, 0);
  gfx.PutPixel(3 + _x, 6 + _y, 255, 255, 255);
  gfx.PutPixel(4 + _x, 6 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 6 + _y, 0, 0, 0);
  gfx.PutPixel(6 + _x, 6 + _y, 254, 221, 88);
  gfx.PutPixel(7 + _x, 6 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 6 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 6 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 6 + _y, 0, 0, 0);
  gfx.PutPixel(11 + _x, 6 + _y, 255, 255, 255);
  gfx.PutPixel(12 + _x, 6 + _y, 255, 255, 255);
  gfx.PutPixel(13 + _x, 6 + _y, 0, 0, 0);
  gfx.PutPixel(14 + _x, 6 + _y, 0, 0, 0);
  gfx.PutPixel(15 + _x, 6 + _y, 0, 0, 0);
  gfx.PutPixel(16 + _x, 6 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 6 + _y, 254, 221, 88);
  gfx.PutPixel(18 + _x, 6 + _y, 0, 0, 0);
  gfx.PutPixel(0 + _x, 7 + _y, 0, 0, 0);
  gfx.PutPixel(1 + _x, 7 + _y, 0, 0, 0);
  gfx.PutPixel(2 + _x, 7 + _y, 255, 255, 255);
  gfx.PutPixel(3 + _x, 7 + _y, 255, 255, 255);
  gfx.PutPixel(4 + _x, 7 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 7 + _y, 0, 0, 0);
  gfx.PutPixel(6 + _x, 7 + _y, 254, 221, 88);
  gfx.PutPixel(7 + _x, 7 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 7 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 7 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 7 + _y, 0, 0, 0);
  gfx.PutPixel(11 + _x, 7 + _y, 255, 255, 255);
  gfx.PutPixel(12 + _x, 7 + _y, 255, 255, 255);
  gfx.PutPixel(13 + _x, 7 + _y, 0, 0, 0);
  gfx.PutPixel(14 + _x, 7 + _y, 0, 0, 0);
  gfx.PutPixel(15 + _x, 7 + _y, 0, 0, 0);
  gfx.PutPixel(16 + _x, 7 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 7 + _y, 254, 221, 88);
  gfx.PutPixel(18 + _x, 7 + _y, 254, 221, 88);
  gfx.PutPixel(19 + _x, 7 + _y, 0, 0, 0);
  gfx.PutPixel(0 + _x, 8 + _y, 0, 0, 0);
  gfx.PutPixel(1 + _x, 8 + _y, 0, 0, 0);
  gfx.PutPixel(2 + _x, 8 + _y, 255, 255, 255);
  gfx.PutPixel(3 + _x, 8 + _y, 255, 255, 255);
  gfx.PutPixel(4 + _x, 8 + _y, 255, 255, 255);
  gfx.PutPixel(5 + _x, 8 + _y, 0, 0, 0);
  gfx.PutPixel(6 + _x, 8 + _y, 254, 221, 88);
  gfx.PutPixel(7 + _x, 8 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 8 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 8 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 8 + _y, 0, 0, 0);
  gfx.PutPixel(11 + _x, 8 + _y, 255, 255, 255);
  gfx.PutPixel(12 + _x, 8 + _y, 255, 255, 255);
  gfx.PutPixel(13 + _x, 8 + _y, 255, 255, 255);
  gfx.PutPixel(14 + _x, 8 + _y, 255, 255, 255);
  gfx.PutPixel(15 + _x, 8 + _y, 0, 0, 0);
  gfx.PutPixel(16 + _x, 8 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 8 + _y, 254, 221, 88);
  gfx.PutPixel(18 + _x, 8 + _y, 254, 221, 88);
  gfx.PutPixel(19 + _x, 8 + _y, 0, 0, 0);
  gfx.PutPixel(0 + _x, 9 + _y, 0, 0, 0);
  gfx.PutPixel(1 + _x, 9 + _y, 254, 221, 88);
  gfx.PutPixel(2 + _x, 9 + _y, 0, 0, 0);
  gfx.PutPixel(3 + _x, 9 + _y, 0, 0, 0);
  gfx.PutPixel(4 + _x, 9 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 9 + _y, 0, 0, 0);
  gfx.PutPixel(6 + _x, 9 + _y, 254, 221, 88);
  gfx.PutPixel(7 + _x, 9 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 9 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 9 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 9 + _y, 254, 221, 88);
  gfx.PutPixel(11 + _x, 9 + _y, 0, 0, 0);
  gfx.PutPixel(12 + _x, 9 + _y, 0, 0, 0);
  gfx.PutPixel(13 + _x, 9 + _y, 0, 0, 0);
  gfx.PutPixel(14 + _x, 9 + _y, 0, 0, 0);
  gfx.PutPixel(15 + _x, 9 + _y, 254, 221, 88);
  gfx.PutPixel(16 + _x, 9 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 9 + _y, 254, 221, 88);
  gfx.PutPixel(18 + _x, 9 + _y, 254, 221, 88);
  gfx.PutPixel(19 + _x, 9 + _y, 0, 0, 0);
  gfx.PutPixel(0 + _x, 10 + _y, 0, 0, 0);
  gfx.PutPixel(1 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(2 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(3 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(4 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(5 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(6 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(7 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(11 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(12 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(13 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(14 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(15 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(16 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(18 + _x, 10 + _y, 254, 221, 88);
  gfx.PutPixel(19 + _x, 10 + _y, 0, 0, 0);
  gfx.PutPixel(0 + _x, 11 + _y, 0, 0, 0);
  gfx.PutPixel(1 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(2 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(3 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(4 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(5 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(6 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(7 + _x, 11 + _y, 20, 14, 18);
  gfx.PutPixel(8 + _x, 11 + _y, 18, 11, 14);
  gfx.PutPixel(9 + _x, 11 + _y, 18, 12, 14);
  gfx.PutPixel(10 + _x, 11 + _y, 18, 12, 14);
  gfx.PutPixel(11 + _x, 11 + _y, 21, 13, 16);
  gfx.PutPixel(12 + _x, 11 + _y, 24, 11, 15);
  gfx.PutPixel(13 + _x, 11 + _y, 0, 0, 0);
  gfx.PutPixel(14 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(15 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(16 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(18 + _x, 11 + _y, 254, 221, 88);
  gfx.PutPixel(19 + _x, 11 + _y, 0, 0, 0);
  gfx.PutPixel(0 + _x, 12 + _y, 0, 0, 0);
  gfx.PutPixel(1 + _x, 12 + _y, 254, 221, 88);
  gfx.PutPixel(2 + _x, 12 + _y, 254, 221, 88);
  gfx.PutPixel(3 + _x, 12 + _y, 254, 221, 88);
  gfx.PutPixel(4 + _x, 12 + _y, 254, 221, 88);
  gfx.PutPixel(5 + _x, 12 + _y, 254, 221, 88);
  gfx.PutPixel(6 + _x, 12 + _y, 23, 9, 23);
  gfx.PutPixel(7 + _x, 12 + _y, 135, 26, 68);
  gfx.PutPixel(8 + _x, 12 + _y, 135, 26, 68);
  gfx.PutPixel(9 + _x, 12 + _y, 135, 26, 68);
  gfx.PutPixel(10 + _x, 12 + _y, 135, 26, 68);
  gfx.PutPixel(11 + _x, 12 + _y, 135, 26, 68);
  gfx.PutPixel(12 + _x, 12 + _y, 135, 26, 68);
  gfx.PutPixel(13 + _x, 12 + _y, 135, 26, 68);
  gfx.PutPixel(14 + _x, 12 + _y, 0, 0, 0);
  gfx.PutPixel(15 + _x, 12 + _y, 254, 221, 88);
  gfx.PutPixel(16 + _x, 12 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 12 + _y, 254, 221, 88);
  gfx.PutPixel(18 + _x, 12 + _y, 254, 221, 88);
  gfx.PutPixel(19 + _x, 12 + _y, 0, 0, 0);
  gfx.PutPixel(1 + _x, 13 + _y, 0, 0, 0);
  gfx.PutPixel(2 + _x, 13 + _y, 254, 221, 88);
  gfx.PutPixel(3 + _x, 13 + _y, 254, 221, 88);
  gfx.PutPixel(4 + _x, 13 + _y, 254, 221, 88);
  gfx.PutPixel(5 + _x, 13 + _y, 0, 0, 0);
  gfx.PutPixel(6 + _x, 13 + _y, 135, 26, 68);
  gfx.PutPixel(7 + _x, 13 + _y, 135, 26, 68);
  gfx.PutPixel(8 + _x, 13 + _y, 135, 26, 68);
  gfx.PutPixel(9 + _x, 13 + _y, 135, 26, 68);
  gfx.PutPixel(10 + _x, 13 + _y, 135, 26, 68);
  gfx.PutPixel(11 + _x, 13 + _y, 135, 26, 68);
  gfx.PutPixel(12 + _x, 13 + _y, 135, 26, 68);
  gfx.PutPixel(13 + _x, 13 + _y, 135, 26, 68);
  gfx.PutPixel(14 + _x, 13 + _y, 135, 26, 68);
  gfx.PutPixel(15 + _x, 13 + _y, 0, 0, 0);
  gfx.PutPixel(16 + _x, 13 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 13 + _y, 254, 221, 88);
  gfx.PutPixel(18 + _x, 13 + _y, 0, 0, 0);
  gfx.PutPixel(1 + _x, 14 + _y, 0, 0, 0);
  gfx.PutPixel(2 + _x, 14 + _y, 254, 221, 88);
  gfx.PutPixel(3 + _x, 14 + _y, 254, 221, 88);
  gfx.PutPixel(4 + _x, 14 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 14 + _y, 135, 26, 68);
  gfx.PutPixel(6 + _x, 14 + _y, 135, 26, 68);
  gfx.PutPixel(7 + _x, 14 + _y, 135, 26, 68);
  gfx.PutPixel(8 + _x, 14 + _y, 135, 26, 68);
  gfx.PutPixel(9 + _x, 14 + _y, 251, 192, 224);
  gfx.PutPixel(10 + _x, 14 + _y, 251, 192, 224);
  gfx.PutPixel(11 + _x, 14 + _y, 251, 192, 224);
  gfx.PutPixel(12 + _x, 14 + _y, 251, 192, 224);
  gfx.PutPixel(13 + _x, 14 + _y, 135, 26, 68);
  gfx.PutPixel(14 + _x, 14 + _y, 135, 26, 68);
  gfx.PutPixel(15 + _x, 14 + _y, 0, 0, 0);
  gfx.PutPixel(16 + _x, 14 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 14 + _y, 254, 221, 88);
  gfx.PutPixel(18 + _x, 14 + _y, 0, 0, 0);
  gfx.PutPixel(2 + _x, 15 + _y, 0, 0, 0);
  gfx.PutPixel(3 + _x, 15 + _y, 254, 221, 88);
  gfx.PutPixel(4 + _x, 15 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 15 + _y, 135, 26, 68);
  gfx.PutPixel(6 + _x, 15 + _y, 135, 26, 68);
  gfx.PutPixel(7 + _x, 15 + _y, 135, 26, 68);
  gfx.PutPixel(8 + _x, 15 + _y, 251, 192, 224);
  gfx.PutPixel(9 + _x, 15 + _y, 251, 192, 224);
  gfx.PutPixel(10 + _x, 15 + _y, 251, 192, 224);
  gfx.PutPixel(11 + _x, 15 + _y, 251, 192, 224);
  gfx.PutPixel(12 + _x, 15 + _y, 251, 192, 224);
  gfx.PutPixel(13 + _x, 15 + _y, 251, 192, 224);
  gfx.PutPixel(14 + _x, 15 + _y, 135, 26, 68);
  gfx.PutPixel(15 + _x, 15 + _y, 0, 0, 0);
  gfx.PutPixel(16 + _x, 15 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 15 + _y, 0, 0, 0);
  gfx.PutPixel(2 + _x, 16 + _y, 0, 0, 0);
  gfx.PutPixel(3 + _x, 16 + _y, 254, 221, 88);
  gfx.PutPixel(4 + _x, 16 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 16 + _y, 135, 26, 68);
  gfx.PutPixel(6 + _x, 16 + _y, 135, 26, 68);
  gfx.PutPixel(7 + _x, 16 + _y, 135, 26, 68);
  gfx.PutPixel(8 + _x, 16 + _y, 251, 192, 224);
  gfx.PutPixel(9 + _x, 16 + _y, 251, 192, 224);
  gfx.PutPixel(10 + _x, 16 + _y, 251, 192, 224);
  gfx.PutPixel(11 + _x, 16 + _y, 251, 192, 224);
  gfx.PutPixel(12 + _x, 16 + _y, 251, 192, 224);
  gfx.PutPixel(13 + _x, 16 + _y, 251, 192, 224);
  gfx.PutPixel(14 + _x, 16 + _y, 135, 26, 68);
  gfx.PutPixel(15 + _x, 16 + _y, 0, 0, 0);
  gfx.PutPixel(16 + _x, 16 + _y, 254, 221, 88);
  gfx.PutPixel(17 + _x, 16 + _y, 0, 0, 0);
  gfx.PutPixel(3 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(4 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(6 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(7 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(8 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(9 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(10 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(11 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(12 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(13 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(14 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(15 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(16 + _x, 17 + _y, 0, 0, 0);
  gfx.PutPixel(5 + _x, 18 + _y, 0, 0, 0);
  gfx.PutPixel(6 + _x, 18 + _y, 0, 0, 0);
  gfx.PutPixel(7 + _x, 18 + _y, 254, 221, 88);
  gfx.PutPixel(8 + _x, 18 + _y, 254, 221, 88);
  gfx.PutPixel(9 + _x, 18 + _y, 254, 221, 88);
  gfx.PutPixel(10 + _x, 18 + _y, 254, 221, 88);
  gfx.PutPixel(11 + _x, 18 + _y, 254, 221, 88);
  gfx.PutPixel(12 + _x, 18 + _y, 254, 221, 88);
  gfx.PutPixel(13 + _x, 18 + _y, 0, 0, 0);
  gfx.PutPixel(14 + _x, 18 + _y, 0, 0, 0);
  gfx.PutPixel(7 + _x, 19 + _y, 0, 0, 0);
  gfx.PutPixel(8 + _x, 19 + _y, 0, 0, 0);
  gfx.PutPixel(9 + _x, 19 + _y, 0, 0, 0);
  gfx.PutPixel(10 + _x, 19 + _y, 0, 0, 0);
  gfx.PutPixel(11 + _x, 19 + _y, 0, 0, 0);
  gfx.PutPixel(12 + _x, 19 + _y, 0, 0, 0);
}

void Dude::update(const Keyboard & kbd) {
  if (kbd.KeyIsPressed(VK_RIGHT)) {
    _x += _speed;
  }

  if (kbd.KeyIsPressed(VK_LEFT)) {
    _x -= _speed;
  }
  
  if (kbd.KeyIsPressed(VK_DOWN)) {
    _y += _speed;
  }

  if (kbd.KeyIsPressed(VK_UP)) {
    _y -= _speed;
  }
}

int Dude::x() const {
  return _x;
}

int Dude::y() const {
  return _y;
}

int Dude::width() const {
  return _width;
}

int Dude::height() const {
  return _height;
}
