#include<iostream>
#include"Player.h"
#include"sfwdraw.h"

int main() {
	sfw::initContext(800, 600, "SFW");

	sfw::setBackgroundColor(BLUE);

	Player one;

	one.x = 400;
	one.y = 300;

	while (sfw::stepContext()) {
		//player
		one.update();
		one.draw();

		//ground
	//	if (one.x <= 0) {
	//		one.x = 0;
	//	}
	}
	sfw::termContext();
}