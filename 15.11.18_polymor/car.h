#pragma once
#include "vehicle.h"
class car :
	public vehicle
{
	string type;
public:
	car(string model, string color, string type);
	void setType(string type);
	string getType() const { return type; }
	void info()const override;
	void start() const override;
	void stop() const override;
};

