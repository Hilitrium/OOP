#include<iostream>
#include "sfwdraw.h"
#include "Player.h"

int main() {
	// Create a window and a drawing context
	sfw::initContext(800, 600, "SFW");

	// Set the background color
	sfw::setBackgroundColor(BLACK);

	Player me;

	me.x = 400;
	me.y = 300;
	
	// 1. second player
	Player2 you;
	you.x = 500;
	you.y = 300;

	// 1. circle object
	Circle circle;
	circle.posX = 400;
	circle.posY = 200;

	Box rect;
	rect.bottomLeftX = 100;
	rect.bottomLeftY = 100;

	rect.topRightX = 200;
	rect.topRightY = 300;

	// set up the game loop
	while (sfw::stepContext()) {
		// game code goes here
		me.update();
		me.draw();
		// 2. Screen Wrappings
		if (me.x > 800) {
			me.x = 0;
		}
		if (me.x < 0) {
			me.x = 800;
		}
		if (me.y > 600) {
			me.y = 0;
		}
		if (me.y < 0) {
			me.y = 600;
		}
		if (you.x > 800) {
			you.x = 0;
		}
		if (you.x < 0) {
			you.x = 800;
		}
		if (you.y > 600) {
			you.y = 0;
		}
		if (you.y < 0) {
			you.y = 600;
		}

		you.update2();
		you.draw2();

		circle.draw();

		Line straight;
		straight.startX = 400;
		straight.starty = 600;

		straight.endx = 100;
		straight.endy = 200;

		straight.draw();

		rect.draw();
	}

	// clean up
	sfw::termContext();
}