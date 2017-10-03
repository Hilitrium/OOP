#pragma once
class Player {
public:
	float x;
	float y;
	float jet = 100.f;

	void update();
	void draw();
};

class Line {
public:
	float startX;
	float startY;

	float endX;
	float endY;

	void draw();
};