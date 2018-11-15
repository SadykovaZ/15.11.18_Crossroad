#include "crossroad.h"
crossroad::crossroad(int red, int green)
{
	srand(time(0));
	this->red = red;
	this->green = green;

}
void crossroad::addRandomVehicle()
{
	this->queue.push_back(unique_ptr<vehicle>(getRandVehicle()));
}
void crossroad::redLight()
{
	lightFlag = 0;
	int rnd = rand() % 10;
	for (size_t i = 0; i < rnd; i++)
	{
		Sleep(red * 1000 / rnd);
		this->addRandomVehicle();
		this->printScreen();
	}
}

void crossroad::greenLight()
{
	lightFlag = 1;
	int rnd = rand() % 10;
	for (size_t i = 0; i < rnd; i++)
	{
		Sleep(green * 1000 / rnd);
		if (queue.size() > 0)
			queue.pop_front();
		this->printScreen();
	}
}

void crossroad::start()
{
	while (1)
	{
		redLight();
		greenLight();
	}
}

void crossroad::printScreen() const
{
	system("cls");
	cout << (lightFlag ? "green" : "red");
	cout << " light\n";
	for (auto&i : queue)
	{
		string tp = typeid(*i).name();
		tp = tp.substr(6)+ " ";
		cout <<tp<< i->getColor() <<" "<< i->getModel();
		cout << endl;
	}
}
