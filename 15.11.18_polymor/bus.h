#pragma once
#include "vehicle.h"
class bus :
	public vehicle
{
	int cntPass;
public:
	bus(string model, string color, int cntPass);
	void setCntPass(int cntPass);
	int getCntPass() const { return cntPass; }
	void info()const override;
	void start() const override;
	void stop() const override;
};

