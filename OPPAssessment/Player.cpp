#include"Player.h"
#include"sfwdraw.h"
#include<iostream>

void Player::update() {
	if (sfw::getKey('W')) {
		y += 10;
	}
	if (sfw::getKey('A')) {
		x -= 3;
	}
	if (sfw::getKey('D')) {
		x += 3;
	}
	if (true) {
		y -= 4;
	}
	if (y < 35) {
		y = 35;
	}

	if (x <= 25) {
		x = 25;
	}
	if (x >= 775) {
		x = 775;
	}
	if (sfw::getKey('W')) {
		if (jet > 100) {
			jet = 100;
		}
		jet -= 2.0f;
		//system("cls");
		std::cout << jet << std::endl;
	}
	else {
		jet + 10;
	}

	// platform detection
	// platform 1
	if (y >= 100 && y <= 105 && x >= 350 && x <= 450) {
		y += 4;
	}
	// platform 2
	if (y >= 200 && y <= 205 && x >= 200 && x <= 300) {
		y += 4;
	}
	// platform 3
	if (y >= 300 && y <= 305 && x >= 400 && x <= 500) {
		y += 4;
	}
}

void Player::draw() {
	sfw::drawCircle(x, y, 25);
}

void Line::draw() {
	sfw::drawLine(startX, startY, endX, endY);
}