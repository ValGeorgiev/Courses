#include <iostream>
#include "PC.h"
using namespace std;

PC::PC(char* _maker, double _price, int _HD, int _RAM) :Device(_maker, _price){
	HD = _HD;
	RAM = _RAM;
}
PC::~PC(){}
PC::PC(const PC& other) : Device(other){
	HD = other.HD;
	RAM = other.RAM;
}
PC& PC::operator=(const PC& other){
	if (this != &other){
		Device::operator=(other);
		HD = other.HD;
		RAM = other.RAM;
	}
	return *this;
}
double PC::getRating()const{
	return HD + RAM;
}
void PC::print()const{
	printOwn();
	cout << "PC: " << endl;
	cout << "HD: " << HD << "	RAM: " << RAM << endl;
}