/******************************************************************************************
 * Chili DirectX Framework Version 16.07.20                                               *
 * Game.h                                                                                 *
 * Copyright 2016 PlanetChili.net <http://www.planetchili.net>                            *
 *                                                                                        *
 * This file is part of The Chili DirectX Framework.                                      *
 *                                                                                        *
 * The Chili DirectX Framework is free software: you can redistribute it and/or modify    *
 * it under the terms of the GNU General Public License as published by                   *
 * the Free Software Foundation, either version 3 of the License, or                      *
 * (at your option) any later version.                                                    *
 *                                                                                        *
 * The Chili DirectX Framework is distributed in the hope that it will be useful,         *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of                         *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                          *
 * GNU General Public License for more details.                                           *
 *                                                                                        *
 * You should have received a copy of the GNU General Public License                      *
 * along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.   *
 ******************************************************************************************/
#pragma once

#include <array>
#include <random>

#include "Dude.h"
#include "Goal.h"
#include "Graphics.h"
#include "Keyboard.h"
#include "Meter.h"
#include "Mouse.h"
#include "Poo.h"

class Game {
 public:
  Game(class MainWindow& wnd);
  Game(const Game&) = delete;
  Game& operator=(const Game&) = delete;
  void Go();

 private:
  void ComposeFrame();
  void UpdateModel();

  /********************************/
  /*  User Functions              */

  /**
   * @brief Draws the game over graphic at the given (x, y) coordinate.
  */
  void drawGameOver(int x, int y);

  /**
   * @brief Draws the title graphic at the given (x, y) coordinate.
  */
  void drawTitleScreen(int x, int y);
  /********************************/

 private:
  MainWindow& _wnd;
  Graphics _gfx;

  /********************************/
  /*  User Variables              */

  // Random number generation for generating initial random Poo locations and 
  // new locations for the goal
  std::random_device _rd;
  std::mt19937 _rng;
  std::uniform_int_distribution<int> _xDist;
  std::uniform_int_distribution<int> _yDist;

  // The hero and the bad guys
  Dude _dude;
  static constexpr int kNumPoos = 10;
  std::array<Poo, kNumPoos> _poos;

  // Game state tracking
  Goal _goal;
  Meter _meter;
  bool _isStarted = false;
  bool _isGameOver = false;
  /********************************/
};
