#pragma once
#include"GameObject.h"

class Player : public gameObject {
public:
	std::string name;

	bool enabled;

	virtual void update() override;
	virtual void draw() override;
};