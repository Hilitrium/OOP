#pragma once
#include<string>
#include<iostream>
class Television {
private:
	int currentChannel;
	int currentVolume;
public:
	Television(int chn, int vol);

	int chn = 0;
	int vol = 0;

	void increaseVolume();
	void decreaseVolume();
	
	void increaseChannel();
	void decreaseChannel();
	void print();
};