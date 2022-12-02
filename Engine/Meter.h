#pragma once

#include "Graphics.h"

class Meter {
 public:
  void grow() {
    if (_x + (_size * _width) < Graphics::ScreenWidth) ++_size;
  }

  void draw(Graphics& gfx) {
    gfx.DrawRect(_x, _y, _size * _width, _height, _c);
  }

 private:
  int _size = 0;
  static constexpr int _x = 10;
  static constexpr int _y = 10;
  static constexpr int _width = 10;
  static constexpr int _height = 15;
  static constexpr Color _c = {100, 149, 237};
};
