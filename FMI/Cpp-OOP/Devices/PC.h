#ifndef PC_H
#define PC_H
#include "Device.h"	

class PC : public Device{
private:
	int HD;
	int RAM;
public:
	PC(char* = "", double = 0.0, int = 0, int = 0);
	~PC();
	PC& operator=(const PC&);
	PC(const PC&);
	virtual double getRating()const;
	void print()const;
};

#endif