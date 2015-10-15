#ifndef Laptop_H
#define Laptop_H
#include "Device.h"

class Laptop : public Device{
private:
	double screen;
	int RAM;
public:
	Laptop(char* = "", double = 0.0, double = 0.0, int = 0);
	~Laptop();
	Laptop(const Laptop&);
	Laptop& operator=(const Laptop&);

	virtual double getRating()const;
	void print()const;
};

#endif