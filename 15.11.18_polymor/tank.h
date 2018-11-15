#pragma once
#include "car.h"

class tank :
	public car
{
public:
	tank(string model, string color)
		:car(model, "green","sedan")
	{

	}
};

