#pragma once

#include "Graphics.h"
#include "Dude.h"

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

	static constexpr int _width = 24;
	static constexpr int _height = 24;
	bool _isEaten = false;
	bool _initialized = false;
};
