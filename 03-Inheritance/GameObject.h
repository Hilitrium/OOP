#pragma once
#include<string>

class gameObject {
public:
	std::string name;
	gameObject();
	gameObject(std::string initialName, bool Enabled);
	bool enabled;

	virtual void update();
	virtual void draw();
};