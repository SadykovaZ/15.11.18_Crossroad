#include "bike.h"

bike::bike(string model, string color)
	:vehicle(model, color)
{

}

void bike::start() const
{
	cout << "\nbike starts";
}

void bike::stop() const
{
	cout << "\nbike stops";
}
