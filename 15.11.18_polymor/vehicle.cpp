#include "vehicle.h"
vehicle::vehicle(string model, string color)
{
	this->color = color;
	this->model = model;
}
void vehicle::setModel(string model)
{
	this->model = model;
}

void vehicle::setColor(string color)
{
	this->color = color;
}

void vehicle::info() const
{
	cout << "Model= " << model;
	cout << "Color= " << color;
}

void vehicle::start() const
{
	cout << " Vehicle starts\n";
}

void vehicle::stop() const
{
	cout << " Stop\n";
}
