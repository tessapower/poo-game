#pragma once

#include "Dude.h"
#include "Graphics.h"

class Poo {
 public:
  Poo() = default;
  ~Poo() = default;

  /**
   * @brief Initialize this Poo with a 2D location and velocity.
  */
  void init(int x, int y, int vx, int vy);

  /**
   * @brief Update the location of this Poo based on its velocity.
  */
  void update();
  bool isColliding(const Dude& dude) const;
  void draw(Graphics& gfx) const;

 private:
  /**
   * @brief Clamp the location of this Poo to the window.
  */
  void clampToWindow() noexcept;

 private:
  int _x;
  int _y;
  int _vx;
  int _vy;

  static constexpr int kWidth = 24;
  static constexpr int kHeight = 24;
  bool _initialized = false;
};
