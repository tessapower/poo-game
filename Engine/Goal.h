#pragma once

#include "Dude.h"
#include "Graphics.h"

class Goal {
 public:
  Goal(int x, int y) : _x(x), _y(y){};
  void update() noexcept;

  void respawn(int x, int y) { 
    _x = x;
    _y = y;
  }

  void draw(Graphics& gfx) { gfx.DrawRect(_x, _y, _size, _size, _c); }

  bool isColliding(const Dude &dude) {
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
  Color _c = {255, 0, 0}; 
  static constexpr int _size = 20;
};
