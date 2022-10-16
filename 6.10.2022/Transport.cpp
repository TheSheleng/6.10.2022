#include "Transport.h"

Transport::~Transport() {};
void Transport::Print()
{
	cout << "Tranport fuel consumption: " << consumption << endl;
};

//----------------------------------------------

Airplane::Airplane(const char* _f, int passengers) : Transport(4.73 * passengers)
{
	int len = strlen(_f);
	flight = new char[len + 1];
	for (int i = 0; i <= len; i++)
		flight[i] = _f[i];
}
Airplane::~Airplane() { delete[] flight; }
Bike::Bike(const char* _c) : Transport()
{
	int len = strlen(_c);
	color = new char[len + 1];
	for (int i = 0; i <= len; i++)
		color[i] = _c[i];
}
Bike::~Bike() { delete[] color; }
Jeep::Jeep(const char* _m) : Transport(13.85)
{
	int len = strlen(_m);
	mark = new char[len + 1];
	for (int i = 0; i <= len; i++)
		mark[i] = _m[i];
}
Jeep::~Jeep() { delete[] mark; }
Vessel::Vessel(const char* _w) : Transport(23.53)
{
	int len = strlen(_w);
	water = new char[len + 1];
	for (int i = 0; i <= len; i++)
		water[i] = _w[i];
}
Vessel::~Vessel() { delete[] water; }
Truck::Truck(const char* _t) : Transport(25.4)
{
	int len = strlen(_t);
	type = new char[len + 1];
	for (int i = 0; i <= len; i++)
		type[i] = _t[i];
}
Truck::~Truck() { delete[] type; }

void Airplane::Print()
{
	cout << "Airplane fuel consumption: " << consumption << endl;
}
void Bike::Print()
{
	cout << "Bike fuel consumption: " << consumption << endl;
}
void Jeep::Print()
{
	cout << "Jeep fuel consumption: " << consumption << endl;
}
void Vessel::Print()
{
	cout << "Vessel fuel consumption: " << consumption << endl;
}
void Truck::Print()
{
	cout << "Truck fuel consumption: " << consumption << endl;
}

