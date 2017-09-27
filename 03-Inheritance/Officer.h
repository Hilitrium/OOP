#pragma once
#include<string>
#include"Person.h"

class Officer : public Person {
protected:
	int badgeNumber;

public:
	Officer();
	Officer(std::string initialName, int happiness, int initialBadgeNumber);


	virtual void greet() override;
};