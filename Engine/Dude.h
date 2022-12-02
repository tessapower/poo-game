#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Dude {
  /**
   * @brief Clamp this Dude's position to within the bounds of the window
   */
  void clampToWindow();
  void draw(Graphics& gfx) const;
  void update(const Keyboard& kbd);
  int x() const;
  int y() const;
  int width() const;
  int height() const;

private:
  int _x = 400;
  int _y = 300;
  static constexpr int _speed = 1;
  static constexpr int _width = 20;
  static constexpr int _height = 20;
};
