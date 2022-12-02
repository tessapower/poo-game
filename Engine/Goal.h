#pragma once

#include "Dude.h"
#include "Graphics.h"

class Goal {
 public:
  Goal(int x, int y) : _x(x), _y(y){};
  void update() noexcept {
    _c.SetR(_c.GetR() + _colorStep);
    _c.SetG(_c.GetG() + _colorStep * 2);
    _c.SetB(_c.GetB() + _colorStep * 2);

    // Cycle between min and max red color
    if (_c.GetR() >= kMaxRed || _c.GetR() <= kMinRed) {
      _colorStep *= -1;
    }
  }

  void respawn(int x, int y) {
    _x = x;
    _y = y;
  }

  void draw(Graphics& gfx) { gfx.DrawRect(_x, _y, kSize, kSize, _c); }

  bool isColliding(const Dude& dude) {
    const int dudeRight = dude.x() + dude.width();
    const int dudebottom = dude.y() + dude.height();
    const int right = _x + kSize;
    const int bottom = _y + kSize;

    return dudeRight > _x && dude.x() < right && dudebottom > _y &&
           dude.y() < bottom;
  }

 private:
  int _x;
  int _y;
  static constexpr int kSize = 20;

  int _colorStep = 1;
  static constexpr int kMinRed = 130;
  static constexpr int kMaxRed = 255;
  Color _c = {kMinRed, 0, 0};
};
