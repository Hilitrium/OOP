#include"Officer.h"
#include<iostream>


Officer::Officer() {
	fullName = "";
	happiness = 50;
	badgeNumber = 0;
}

Officer::Officer(std::string initialName, int initialHappiness, int initialBadgeNumber) {
	fullName = initialName;
	happiness = initialHappiness;
	badgeNumber = initialBadgeNumber;
}

void Officer::greet() {
	Person::greet();

	//std::cout << "hi, my name is " << fullName << "." << std::endl;
	std::cout << "officer number #" << badgeNumber << "." << std::endl;
}