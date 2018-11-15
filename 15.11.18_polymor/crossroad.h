#pragma once
#include<list>
#include"vehicle.h"
#include<memory>
#include<ctime>
#include<Windows.h>
using namespace std;

vehicle* getRandVehicle();

class crossroad
{
	list<unique_ptr<vehicle>> queue;
	int green;
	int red;
	bool lightFlag;
public:
	crossroad(int red, int green);
	void addRandomVehicle();
	void redLight();
	void greenLight();
	void start();
	void printScreen()const;
	
};

