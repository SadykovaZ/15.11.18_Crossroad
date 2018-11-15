#include "car.h"

car::car(string model, string color, string type)
	:vehicle(model,color)
{
	this->type = type;
}

void car::setType(string type)
{
	this->type = type;
}

void car::info() const
{
	vehicle::info();
	cout << "\nType = " << type;
}

void car::start() const
{
	cout << "Car starts\n";
}

void car::stop() const
{
	cout << "Car stops\n";

}
