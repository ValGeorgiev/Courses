#include <iostream>		
#include "ShopDevice.h"
using namespace std;

ShopDevice::ShopDevice(){
	size = 0;
	capacity = 1;
	devices = new Device*[capacity];
}
ShopDevice::~ShopDevice(){
	for (int i = 0; i < size; i++){
		delete(devices + i);
	}
	delete[]devices;
}
ShopDevice::ShopDevice(const ShopDevice& other){
	size = other.size;
	capacity = other.capacity;
	devices = new Device*[capacity];
	for (int i = 0; i < size; i++){
		devices[i] = other.devices[i];
	}
}
ShopDevice& ShopDevice::operator=(const ShopDevice& other){
	if (this != &other){
		size = other.size;
		capacity = other.capacity;
		devices = new Device*[capacity];
		for (int i = 0; i < size; i++){
			devices[i] = other.devices[i];
		}
	}
	return *this;
}
double ShopDevice::getAllRatings()const{
	double result = 0.0;
	for (int i = 0; i < size; i++){
		result += devices[i]->getRating();
	}
	return result;
}
void ShopDevice::print()const{
	for (int i = 0; i < size; i++){
		devices[i]->print();
	}
}
void ShopDevice::addDevice(Device* newOne){
	if (size == capacity){
		capacity *= 2;
		Device** tmp = new Device*[capacity];
		for (int i = 0; i < size; i++){
			tmp[i] = devices[i];
		}
		for (int i = 0; i < size; i++){
			delete(devices + i);
		}
		delete[]devices;
		devices = new Device*[capacity];
		for (int i = 0; i < size; i++){
			devices[i] = tmp[i];
		}
		for (int i = 0; i < size; i++){
			delete(tmp + i);
		}
		delete[]tmp;
	}
	devices[size++] = newOne;
}
void ShopDevice::removeDevice(char* _maker){
	for (int i = 0; i < size; i++){
		if (!strcmp(devices[i]->getMaker(), _maker)){
			for (int j = i + 1; j < size; j++){
				devices[i - 1] = devices[i];
			}
			size--;
		}
	}
}
