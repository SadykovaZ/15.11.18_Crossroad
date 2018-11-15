#include "bus.h"

bus::bus(string model, string color, int cntPass)
	:vehicle(model, color)
{
	this->cntPass = cntPass;
}

void bus::setCntPass(int cntPass)
{
	this->cntPass = cntPass;
}

void bus::info() const
{
	vehicle::info();
	cout << "\n Count of passengers = " << cntPass;
}

void bus::start() const
{
	cout <<  "bus starts:";
}

void bus::stop() const
{
	cout << "bus stops:";

}
