#include"Player.h"
#include"sfwdraw.h"

void Player::update() {
	if (sfw::getKey('W')) {
		y += 4;
	}
	if (sfw::getKey('A')) {
		x -= 3;
	}
	if (sfw::getKey('D')) {
		x += 3;
	}
	if (true) {
		y--;
	}
	if (x < 10) {
		x = 10;
	}
}

void Player::draw() {
	sfw::drawCircle(x, y, 25);
}