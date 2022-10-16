#pragma once

#include <iostream>

using namespace std;

class Transport
{
protected:
	const double consumption;

public:
	Transport(double _c = 0U) : consumption(_c) {};
	virtual ~Transport() = 0;
	virtual void Print() = 0;
};

class Airplane : public Transport
{
	char* flight;

public:
	Airplane(const char* _f, int passengers);
	~Airplane() override;
	void Print() override;
};

class Bike : public Transport
{
	char* color;

public:
	Bike(const char* _c);
	~Bike() override;
	void Print() override;
};

class Jeep : public Transport
{
	char* mark;

public:
	Jeep(const char* _m);
	~Jeep() override;
	void Print() override;
};

class Vessel : public Transport
{
	char* water;

public:
	Vessel(const char* _w);
	~Vessel() override;
	void Print() override;
};

class Truck : public Transport
{
	char* type;

public:
	Truck(const char* _t);
	~Truck() override;
	void Print() override;
};
