#pragma once

#include "Graphics.h"
#include "Keyboard.h"

/**
 * @brief The main character of the Poo Game controlled by the player.
*/
class Dude {
 public:
  Dude() = default;
  ~Dude() = default;

  /**
   * @brief Clamp this Dude's position to within the bounds of the window
   */
  void clampToWindow();

  /**
   * @brief Draw this Dude with the given Graphics context.
   * @param gfx
   */
  void draw(Graphics& gfx) const;

  /**
   * @brief Update this Dude's position based on player keyboard input.
   */
  void update(const Keyboard& kbd);

  int x() const { return _x; }

  int y() const { return _y; }

  int width() const { return kWidth; }

  int height() const { return kHeight; }

 private:
  int _x = 400;
  int _y = 300;
  static constexpr int kSpeed = 1;
  static constexpr int kWidth = 20;
  static constexpr int kHeight = 20;
};
