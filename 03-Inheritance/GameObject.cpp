#include "GameObject.h"
#include<iostream>

gameObject::gameObject()
{
	name = "";
	enabled = true;
}

gameObject::gameObject(std::string initialName, bool Enabled) {
	name = initialName;
	enabled = Enabled;
}

void gameObject::update() {
	std::cout << "this workes" << std::endl;
}

void gameObject::draw() {
	
}