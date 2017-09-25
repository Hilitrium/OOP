#include<iostream>
#include"Televison.h"
#include"PiggyBank.h"
//using namespace std;
//#include"Person.h"

int main() {
	// Demo
	/*Person human("Jacob", 19);
	human.print();

	Person underling("Koby", 19);
	underling.print();

	Person student("Xavier", 14);
	student.print();

	Person baby;
	baby.name = "EzzyBaby";
	baby.age = 0;
	baby.print();*/

	//Closed
	//1. Television
	Television Change(15, 31);
	Change.decreaseChannel();
	Change.increaseVolume();
	Change.print();

	//2.Digital Piggy Bank
	PiggyBank wallet;
	wallet.deposit(3.50);
	std::cout << wallet.balace() << std::endl;
	std::cout << wallet.withdraw() << std::endl;
	std::cout << wallet.balace() << std::endl;
	while (true);
}