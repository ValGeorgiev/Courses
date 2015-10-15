#include <iostream>
#include "Printer.h"
using namespace std;

Printer::Printer(char* _maker, double _price, bool _isColored, char _type) : Device(_maker, _price){
	isColored = _isColored;
	type = _type;
}
Printer::~Printer(){}
Printer::Printer(const Printer& other) : Device(other){
	isColored = other.isColored;
	type = other.type;
}
Printer& Printer::operator=(const Printer& other){
	if (this != &other){
		Device::operator=(other); 
		isColored = other.isColored;
		type = other.type;
	}
	return *this;
}
double Printer::getRating()const{
	if (isColored){
		return 10;
	}
	return 5;
}
void Printer::print()const{
	printOwn();
	cout << "Printer: " << endl;
	cout << "Is colored : " << isColored << "  Type: " << type << endl;
}