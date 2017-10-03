#include<iostream>
#include"Player.h"
#include"Platform.h"
#include"sfwdraw.h"

int main() {

	std::cout << "it workes" << std::endl;
	sfw::initContext(800, 600, "SFW");

	sfw::setBackgroundColor(BLACK);

	Player one;

	one.x = 400;
	one.y = 300;

	//platforms and ground
		Line straight;
		straight.startX = 0;
		straight.startY = 10;

		straight.endX = 800;
		straight.endY = 10;

		Platform first;
		first.startX = 350;
		first.startY = 100;

		first.endX = 450;
		first.endY = 100;

		Platform second;
		second.startX = 200;
		second.startY = 200;

		second.endX = 300;
		second.endY = 200;

		Platform third;
		third.startX = 400;
		third.startY = 300;

		third.endX = 500;
		third.endY = 300;


	while (sfw::stepContext()) {
		//player
		
		one.update();
		one.draw();
		straight.draw();
		first.draw();
		second.draw();
		third.draw();
	}
	sfw::termContext();
}