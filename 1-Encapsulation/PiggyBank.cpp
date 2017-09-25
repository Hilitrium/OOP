#include "PiggyBank.h"

void PiggyBank::deposit(float DepositedAmount) {
	currentBalance += DepositedAmount;
}

float PiggyBank::withdraw() {
	int dummy = currentBalance;
	currentBalance = 0;
	
	return dummy;
}
