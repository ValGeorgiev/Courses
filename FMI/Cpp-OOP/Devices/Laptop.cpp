#include <iostream>
#include "Laptop.h"
using namespace std;

Laptop::Laptop(char* _maker, double _price, double _screen, int _RAM) : Device(_maker, _price){
	screen = _screen;
	RAM = _RAM;
}
Laptop::~Laptop(){}
Laptop::Laptop(const Laptop& other): Device(other){
	screen = other.screen;
	RAM = other.RAM;
}
Laptop& Laptop::operator=(const Laptop& other){
	if (this != &other){
		Device::operator=(other);
		screen = other.screen;
		RAM = other.RAM;
	}
	return *this;
}
double Laptop::getRating()const{
	return screen + RAM;
}
void Laptop::print()const{
	printOwn();
	cout << "Laptop: " << endl;
	cout << "Screen : " << screen << "	RAM:" << RAM << endl;
}
