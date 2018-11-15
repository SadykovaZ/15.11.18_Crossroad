#include"crossroad.h"
#include"bike.h"
#include"bus.h"
#include"car.h"
#include"tank.h"
#include<vector>

vector<string> models = { "audi","BMW","Toyota","Lexus","Vaz","Suzuki","Liaz" };
vector<string> colors = { "white","black","pink","green","red","gray" };

vehicle* getRandVehicle() 
{
	string mdl = models[rand() % models.size()];
	string clr = colors[rand() % colors.size()];
	int v = rand() % 4;
	switch (v)
	{
	case 0:
		return new car(mdl, clr, "sedan");
	case 1:
		return new bus(mdl, clr, 150);
	case 2:
		return new bike(mdl, clr);
	case 3:
		return new tank(mdl, clr);
	}
}
void main()
{
	crossroad c(5,4);
	c.start();
	system("pause");
}