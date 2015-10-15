#ifndef Printer_H
#define Printer_H
#include "Device.h"

class Printer :public Device{
private:
	bool isColored;
	char type;
public:
	Printer(char* = "", double = 0.0, bool = false, char = 'L');
	~Printer();
	Printer& operator=(const Printer&);
	Printer(const Printer&);
	virtual double getRating()const;
	void print()const;
};


#endif