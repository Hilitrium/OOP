#pragma once

class Player {
public:
	float x;
	float y;

	void update();
	void draw();
};

class Player2 {
public:
	float x;
	float y;

	void update2();
	void draw2();
};

// open 1. circle object
class Circle {
public:
	float posX; // position on the x-axis
	float posY; // position on the y-axis

	float radius; // describes the size of the circle

	void draw(); // draws the circle
};

class Line {
public:
	float startX;	// start-position on the x-axis
	float starty;	// start-position on the y-axis

	float endx;		// end-position on the x-axis
	float endy;		// end-position on the y-axis

	void draw();
};

class Box
{
public:
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
};