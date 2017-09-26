#include"Player.h"
#include"sfwdraw.h"

void Player::update() {
	if (sfw::getKey('W')) {
		y += 2;
	}
	if (sfw::getKey('S')) {
		y -= 2;
	}
	if (sfw::getKey('A')) {
		x -= 2;
	}
	if (sfw::getKey('D')) {
		x += 2;
	}
}

void Player2::update2() {
	if (sfw::getKey('I')) {
		y++;
	}
	if (sfw::getKey('K')) {
		y--;
	}
	if (sfw::getKey('J')) {
		x--;
	}
	if (sfw::getKey('L')) {
		x++;
	}
}

void Player::draw() {
	sfw::drawCircle(x, y, 25);
}

void Player2::draw2() {
	sfw::drawCircle(x, y, 30);
}

void Circle::draw() {
	sfw::drawCircle(300, 400, 50);
}