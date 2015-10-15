#include <iostream>
#include <cassert>
#include "Device.h"
using namespace std;

void Device::cpy(char* _maker, double _price){
	size_t len = strlen(_maker) + 1;
	maker = new char[len];
	assert(maker != NULL);
	strcpy_s(maker, len, _maker);
	price = _price;
}
Device::Device(char* _maker, double _price){
	cpy(_maker, _price);
}
Device::~Device(){
	delete[]maker;
}
Device::Device(const Device& other){
	cpy(other.maker, other.price);
}
Device& Device::operator=(const Device& other){
	if (this != &other){
		delete[]maker;
		cpy(other.maker, other.price);
	}
	return *this;
}
void Device::printOwn()const{
	cout << "Maker: " << maker << "		Price: " << price << endl;
}
void Device::setMaker(char* _maker){
	size_t len = strlen(_maker) + 1;
	maker = new char[len];
	assert(maker != NULL);
	strcpy_s(maker, len, _maker);
}
void Device::setPrice(double _price){
	price = _price;
}
char* Device::getMaker()const{
	return maker;
}
double Device::getPrice()const{
	return price;
}