#include "Poo.h"

#include <assert.h>

#include "Graphics.h"

void Poo::init(int x, int y, int vx, int vy) {
  assert(!_initialized);

  _x = x;
  _y = y;
  _vx = vx;
  _vy = vy;
  _initialized = true;
}

void Poo::update() {
  assert(_initialized);

  _x += _vx;
  _y += _vy;
  clampToWindow();
}

void Poo::clampToWindow() noexcept {
  const int right = _x + kWidth;
  if (_x < 0) {
    _x = 0;
    _vx = -_vx;
  } else if (right >= Graphics::ScreenWidth) {
    _x = (Graphics::ScreenWidth - 1) - kWidth;
    _vx = -_vx;
  }

  const int bottom = _y + kHeight;
  if (_y < 0) {
    _y = 0;
    _vy = -_vy;
  } else if (bottom >= Graphics::ScreenHeight) {
    _y = (Graphics::ScreenHeight - 1) - kHeight;
    _vy = -_vy;
  }
}

bool Poo::isColliding(const Dude& dude) const {
  assert(_initialized);

  const int dudeRight = dude.x() + dude.width();
  const int dudebottom = dude.y() + dude.height();
  const int pooRight = _x + kWidth;
  const int pooBottom = _y + kHeight;

  return dudeRight > _x
    && dude.x() < pooRight
    && dudebottom > _y
    && dude.y() < pooBottom;
}

void Poo::draw(Graphics& gfx) const {
  assert(_initialized);

  gfx.PutPixel(14 + _x, 0 + _y, 138, 77, 0);
  gfx.PutPixel(7 + _x, 1 + _y, 138, 77, 0);
  gfx.PutPixel(13 + _x, 1 + _y, 138, 77, 0);
  gfx.PutPixel(20 + _x, 1 + _y, 138, 77, 0);
  gfx.PutPixel(6 + _x, 2 + _y, 138, 77, 0);
  gfx.PutPixel(13 + _x, 2 + _y, 138, 77, 0);
  gfx.PutPixel(20 + _x, 2 + _y, 138, 77, 0);
  gfx.PutPixel(6 + _x, 3 + _y, 138, 77, 0);
  gfx.PutPixel(6 + _x, 4 + _y, 138, 77, 0);
  gfx.PutPixel(14 + _x, 4 + _y, 138, 77, 0);
  gfx.PutPixel(21 + _x, 4 + _y, 138, 77, 0);
  gfx.PutPixel(7 + _x, 5 + _y, 138, 77, 0);
  gfx.PutPixel(13 + _x, 5 + _y, 138, 77, 0);
  gfx.PutPixel(21 + _x, 5 + _y, 138, 77, 0);
  gfx.PutPixel(7 + _x, 6 + _y, 138, 77, 0);
  gfx.PutPixel(20 + _x, 6 + _y, 138, 77, 0);
  gfx.PutPixel(6 + _x, 7 + _y, 138, 77, 0);
  gfx.PutPixel(14 + _x, 7 + _y, 51, 28, 0);
  gfx.PutPixel(15 + _x, 7 + _y, 51, 28, 0);
  gfx.PutPixel(20 + _x, 7 + _y, 138, 77, 0);
  gfx.PutPixel(12 + _x, 8 + _y, 51, 28, 0);
  gfx.PutPixel(13 + _x, 8 + _y, 51, 28, 0);
  gfx.PutPixel(14 + _x, 8 + _y, 51, 28, 0);
  gfx.PutPixel(7 + _x, 9 + _y, 138, 77, 0);
  gfx.PutPixel(11 + _x, 9 + _y, 51, 28, 0);
  gfx.PutPixel(12 + _x, 9 + _y, 102, 57, 0);
  gfx.PutPixel(13 + _x, 9 + _y, 138, 77, 0);
  gfx.PutPixel(14 + _x, 9 + _y, 138, 77, 0);
  gfx.PutPixel(15 + _x, 9 + _y, 51, 28, 0);
  gfx.PutPixel(21 + _x, 9 + _y, 138, 77, 0);
  gfx.PutPixel(10 + _x, 10 + _y, 51, 28, 0);
  gfx.PutPixel(11 + _x, 10 + _y, 51, 28, 0);
  gfx.PutPixel(12 + _x, 10 + _y, 102, 57, 0);
  gfx.PutPixel(13 + _x, 10 + _y, 138, 77, 0);
  gfx.PutPixel(14 + _x, 10 + _y, 138, 77, 0);
  gfx.PutPixel(15 + _x, 10 + _y, 51, 28, 0);
  gfx.PutPixel(20 + _x, 10 + _y, 138, 77, 0);
  gfx.PutPixel(9 + _x, 11 + _y, 51, 28, 0);
  gfx.PutPixel(10 + _x, 11 + _y, 138, 77, 0);
  gfx.PutPixel(11 + _x, 11 + _y, 138, 77, 0);
  gfx.PutPixel(12 + _x, 11 + _y, 51, 28, 0);
  gfx.PutPixel(13 + _x, 11 + _y, 51, 28, 0);
  gfx.PutPixel(14 + _x, 11 + _y, 51, 28, 0);
  gfx.PutPixel(15 + _x, 11 + _y, 51, 28, 0);
  gfx.PutPixel(16 + _x, 11 + _y, 51, 28, 0);
  gfx.PutPixel(9 + _x, 12 + _y, 51, 28, 0);
  gfx.PutPixel(10 + _x, 12 + _y, 138, 77, 0);
  gfx.PutPixel(11 + _x, 12 + _y, 138, 77, 0);
  gfx.PutPixel(12 + _x, 12 + _y, 111, 62, 0);
  gfx.PutPixel(13 + _x, 12 + _y, 102, 57, 0);
  gfx.PutPixel(14 + _x, 12 + _y, 102, 57, 0);
  gfx.PutPixel(15 + _x, 12 + _y, 102, 57, 0);
  gfx.PutPixel(16 + _x, 12 + _y, 51, 28, 0);
  gfx.PutPixel(9 + _x, 13 + _y, 51, 28, 0);
  gfx.PutPixel(10 + _x, 13 + _y, 109, 61, 0);
  gfx.PutPixel(11 + _x, 13 + _y, 138, 77, 0);
  gfx.PutPixel(12 + _x, 13 + _y, 138, 77, 0);
  gfx.PutPixel(13 + _x, 13 + _y, 138, 77, 0);
  gfx.PutPixel(14 + _x, 13 + _y, 138, 77, 0);
  gfx.PutPixel(15 + _x, 13 + _y, 138, 77, 0);
  gfx.PutPixel(16 + _x, 13 + _y, 51, 28, 0);
  gfx.PutPixel(5 + _x, 14 + _y, 51, 28, 0);
  gfx.PutPixel(7 + _x, 14 + _y, 51, 28, 0);
  gfx.PutPixel(8 + _x, 14 + _y, 51, 28, 0);
  gfx.PutPixel(9 + _x, 14 + _y, 51, 28, 0);
  gfx.PutPixel(10 + _x, 14 + _y, 51, 28, 0);
  gfx.PutPixel(11 + _x, 14 + _y, 138, 77, 0);
  gfx.PutPixel(12 + _x, 14 + _y, 138, 77, 0);
  gfx.PutPixel(13 + _x, 14 + _y, 138, 77, 0);
  gfx.PutPixel(14 + _x, 14 + _y, 138, 77, 0);
  gfx.PutPixel(15 + _x, 14 + _y, 138, 77, 0);
  gfx.PutPixel(16 + _x, 14 + _y, 51, 28, 0);
  gfx.PutPixel(4 + _x, 15 + _y, 51, 28, 0);
  gfx.PutPixel(5 + _x, 15 + _y, 138, 77, 0);
  gfx.PutPixel(6 + _x, 15 + _y, 51, 28, 0);
  gfx.PutPixel(7 + _x, 15 + _y, 116, 65, 0);
  gfx.PutPixel(8 + _x, 15 + _y, 138, 77, 0);
  gfx.PutPixel(9 + _x, 15 + _y, 138, 77, 0);
  gfx.PutPixel(10 + _x, 15 + _y, 138, 77, 0);
  gfx.PutPixel(11 + _x, 15 + _y, 51, 28, 0);
  gfx.PutPixel(12 + _x, 15 + _y, 51, 28, 0);
  gfx.PutPixel(13 + _x, 15 + _y, 51, 28, 0);
  gfx.PutPixel(14 + _x, 15 + _y, 51, 28, 0);
  gfx.PutPixel(15 + _x, 15 + _y, 51, 28, 0);
  gfx.PutPixel(16 + _x, 15 + _y, 51, 28, 0);
  gfx.PutPixel(17 + _x, 15 + _y, 51, 28, 0);
  gfx.PutPixel(18 + _x, 15 + _y, 51, 28, 0);
  gfx.PutPixel(1 + _x, 16 + _y, 51, 28, 0);
  gfx.PutPixel(2 + _x, 16 + _y, 51, 28, 0);
  gfx.PutPixel(3 + _x, 16 + _y, 51, 28, 0);
  gfx.PutPixel(4 + _x, 16 + _y, 51, 28, 0);
  gfx.PutPixel(5 + _x, 16 + _y, 138, 77, 0);
  gfx.PutPixel(6 + _x, 16 + _y, 51, 28, 0);
  gfx.PutPixel(7 + _x, 16 + _y, 116, 65, 0);
  gfx.PutPixel(8 + _x, 16 + _y, 138, 77, 0);
  gfx.PutPixel(9 + _x, 16 + _y, 138, 77, 0);
  gfx.PutPixel(10 + _x, 16 + _y, 138, 77, 0);
  gfx.PutPixel(11 + _x, 16 + _y, 138, 77, 0);
  gfx.PutPixel(12 + _x, 16 + _y, 138, 77, 0);
  gfx.PutPixel(13 + _x, 16 + _y, 109, 61, 0);
  gfx.PutPixel(14 + _x, 16 + _y, 51, 28, 0);
  gfx.PutPixel(15 + _x, 16 + _y, 138, 77, 0);
  gfx.PutPixel(16 + _x, 16 + _y, 138, 77, 0);
  gfx.PutPixel(17 + _x, 16 + _y, 138, 77, 0);
  gfx.PutPixel(18 + _x, 16 + _y, 123, 69, 0);
  gfx.PutPixel(19 + _x, 16 + _y, 51, 28, 0);
  gfx.PutPixel(0 + _x, 17 + _y, 51, 28, 0);
  gfx.PutPixel(1 + _x, 17 + _y, 87, 49, 0);
  gfx.PutPixel(2 + _x, 17 + _y, 87, 49, 0);
  gfx.PutPixel(3 + _x, 17 + _y, 87, 49, 0);
  gfx.PutPixel(4 + _x, 17 + _y, 87, 49, 0);
  gfx.PutPixel(5 + _x, 17 + _y, 51, 28, 0);
  gfx.PutPixel(6 + _x, 17 + _y, 51, 28, 0);
  gfx.PutPixel(7 + _x, 17 + _y, 43, 24, 0);
  gfx.PutPixel(8 + _x, 17 + _y, 51, 28, 0);
  gfx.PutPixel(9 + _x, 17 + _y, 51, 28, 0);
  gfx.PutPixel(10 + _x, 17 + _y, 51, 28, 0);
  gfx.PutPixel(11 + _x, 17 + _y, 51, 28, 0);
  gfx.PutPixel(12 + _x, 17 + _y, 51, 28, 0);
  gfx.PutPixel(13 + _x, 17 + _y, 40, 22, 0);
  gfx.PutPixel(14 + _x, 17 + _y, 51, 28, 0);
  gfx.PutPixel(15 + _x, 17 + _y, 138, 77, 0);
  gfx.PutPixel(16 + _x, 17 + _y, 138, 77, 0);
  gfx.PutPixel(17 + _x, 17 + _y, 138, 77, 0);
  gfx.PutPixel(18 + _x, 17 + _y, 123, 69, 0);
  gfx.PutPixel(19 + _x, 17 + _y, 51, 28, 0);
  gfx.PutPixel(0 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(1 + _x, 18 + _y, 138, 77, 0);
  gfx.PutPixel(2 + _x, 18 + _y, 138, 77, 0);
  gfx.PutPixel(3 + _x, 18 + _y, 138, 77, 0);
  gfx.PutPixel(4 + _x, 18 + _y, 138, 77, 0);
  gfx.PutPixel(5 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(6 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(7 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(8 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(9 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(10 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(11 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(12 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(13 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(14 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(15 + _x, 18 + _y, 138, 77, 0);
  gfx.PutPixel(16 + _x, 18 + _y, 138, 77, 0);
  gfx.PutPixel(17 + _x, 18 + _y, 138, 77, 0);
  gfx.PutPixel(18 + _x, 18 + _y, 123, 69, 0);
  gfx.PutPixel(19 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(20 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(21 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(22 + _x, 18 + _y, 51, 28, 0);
  gfx.PutPixel(0 + _x, 19 + _y, 51, 28, 0);
  gfx.PutPixel(1 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(2 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(3 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(4 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(5 + _x, 19 + _y, 51, 28, 0);
  gfx.PutPixel(6 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(7 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(8 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(9 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(10 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(11 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(12 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(13 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(14 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(15 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(16 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(17 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(18 + _x, 19 + _y, 123, 69, 0);
  gfx.PutPixel(19 + _x, 19 + _y, 51, 28, 0);
  gfx.PutPixel(20 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(21 + _x, 19 + _y, 138, 77, 0);
  gfx.PutPixel(22 + _x, 19 + _y, 65, 36, 0);
  gfx.PutPixel(23 + _x, 19 + _y, 51, 28, 0);
  gfx.PutPixel(1 + _x, 20 + _y, 51, 28, 0);
  gfx.PutPixel(2 + _x, 20 + _y, 51, 28, 0);
  gfx.PutPixel(3 + _x, 20 + _y, 51, 28, 0);
  gfx.PutPixel(4 + _x, 20 + _y, 51, 28, 0);
  gfx.PutPixel(5 + _x, 20 + _y, 51, 28, 0);
  gfx.PutPixel(6 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(7 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(8 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(9 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(10 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(11 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(12 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(13 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(14 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(15 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(16 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(17 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(18 + _x, 20 + _y, 123, 69, 0);
  gfx.PutPixel(19 + _x, 20 + _y, 51, 28, 0);
  gfx.PutPixel(20 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(21 + _x, 20 + _y, 138, 77, 0);
  gfx.PutPixel(22 + _x, 20 + _y, 65, 36, 0);
  gfx.PutPixel(23 + _x, 20 + _y, 51, 28, 0);
  gfx.PutPixel(0 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(1 + _x, 21 + _y, 138, 77, 0);
  gfx.PutPixel(2 + _x, 21 + _y, 138, 77, 0);
  gfx.PutPixel(3 + _x, 21 + _y, 138, 77, 0);
  gfx.PutPixel(4 + _x, 21 + _y, 138, 77, 0);
  gfx.PutPixel(5 + _x, 21 + _y, 138, 77, 0);
  gfx.PutPixel(6 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(7 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(8 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(9 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(10 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(11 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(12 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(13 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(14 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(15 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(16 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(17 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(18 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(20 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(21 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(22 + _x, 21 + _y, 51, 28, 0);
  gfx.PutPixel(0 + _x, 22 + _y, 51, 28, 0);
  gfx.PutPixel(1 + _x, 22 + _y, 65, 36, 0);
  gfx.PutPixel(2 + _x, 22 + _y, 65, 36, 0);
  gfx.PutPixel(3 + _x, 22 + _y, 65, 36, 0);
  gfx.PutPixel(4 + _x, 22 + _y, 65, 36, 0);
  gfx.PutPixel(5 + _x, 22 + _y, 65, 36, 0);
  gfx.PutPixel(6 + _x, 22 + _y, 51, 28, 0);
  gfx.PutPixel(1 + _x, 23 + _y, 51, 28, 0);
  gfx.PutPixel(2 + _x, 23 + _y, 51, 28, 0);
  gfx.PutPixel(3 + _x, 23 + _y, 51, 28, 0);
  gfx.PutPixel(4 + _x, 23 + _y, 51, 28, 0);
  gfx.PutPixel(5 + _x, 23 + _y, 51, 28, 0);
  gfx.PutPixel(6 + _x, 23 + _y, 51, 28, 0);
}
