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

    // Update the color of the goal
    if (_c.GetR() >= _maxRed || _c.GetR() <= _minRed) {
      _colorStep *= -1;
    }
  }

  void respawn(int x, int y) {
    _x = x;
    _y = y;
  }

  void draw(Graphics& gfx) { gfx.DrawRect(_x, _y, _size, _size, _c); }

  bool isColliding(const Dude& dude) {
    const int dudeRight = dude.x() + dude.width();
    const int dudebottom = dude.y() + dude.height();
    const int right = _x + _size;
    const int bottom = _y + _size;

    return dudeRight > _x && dude.x() < right && dudebottom > _y &&
           dude.y() < bottom;
  }

 private:
  int _x;
  int _y;
  static constexpr int _size = 20;

  int _colorStep = 1;
  static constexpr int _minRed = 130;
  static constexpr int _maxRed = 255;
  Color _c = {_minRed, 0, 0};
};
