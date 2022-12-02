#pragma once

#include "Dude.h"
#include "Graphics.h"

class Poo {
 public:
  void init(int x, int y, int vx, int vy);
  void update();
  bool isColliding(const Dude& dude);
  void draw(Graphics& gfx) const;
  bool isEaten() const;

 private:
  int _x;
  int _y;
  int _vx;
  int _vy;

  static constexpr int kWidth = 24;
  static constexpr int kHeight = 24;
  bool _initialized = false;
};
