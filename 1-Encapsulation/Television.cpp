#include"Televison.h"
#include<iostream>

void Television::print() {
	std::cout << currentChannel << std::endl;
	std::cout << currentVolume << std::endl;
}

Television::Television(int chn, int vol)
{
	currentChannel = chn;
	currentVolume = vol;
}

void Television::increaseVolume(){
	vol++;
}

void Television::decreaseVolume() {
	vol--;
}

void Television::increaseChannel() {
	chn++;
}

void Television::decreaseChannel() {
	chn--;
}