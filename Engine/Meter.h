#pragma once

#include "Graphics.h"

class Meter {
 public:
  void grow() {
    if (kX + (_size * kWidth) < Graphics::ScreenWidth) ++_size;
  }

  void draw(Graphics& gfx) {
    gfx.DrawRect(kX, kY, _size * kWidth, kHeight, kColor);
  }

 private:
  int _size = 0;
  static constexpr int kX = 10;
  static constexpr int kY = 10;
  static constexpr int kWidth = 10;
  static constexpr int kHeight = 15;
  static constexpr Color kColor = {100, 149, 237};
};
