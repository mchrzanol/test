#pragma once
#include <iostream>

class globalVariables
{
private:
	int device = 0;

public:
	void BindDevice(int device) { this->device = device; };
	int GetDevice() { return device; };
};

globalVariables binds;

#define BindDevice(x)	\
do {					\
binds.BindDevice(x);	\
}while(0)