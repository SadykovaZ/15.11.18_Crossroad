#pragma once
#include<string>
#include<iostream>
using namespace std;
class vehicle
{
	string color;
	string model;

public:
	vehicle(string model, string color);
	string getColor() const { return color; }
	string getModel() const { return model; }

	void setModel(string model);
	void setColor(string color);
	virtual void info() const;
	virtual void start() const;
	virtual void stop() const;
};

