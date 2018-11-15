#pragma once
#include "vehicle.h"
class bike :
	public vehicle
{
public:
	bike(string model, string color);
	void start() const override;
	void stop() const override;

};

