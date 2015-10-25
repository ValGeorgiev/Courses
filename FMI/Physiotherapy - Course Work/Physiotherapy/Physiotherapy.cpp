#include<iostream>
#include<cassert>
#include "Physiotherapy.h"
using namespace std;

void Physiotherapy::cpy(char* name, double price, int duration, int startTime){
	size_t len = strlen(name) + 1;
	this->name = new char[len];
	assert(this->name != NULL);
	strcpy_s(this->name, len, name);
	
	this->price = price;
	this->duration = duration;
	this->startTime = startTime;
}


Physiotherapy::Physiotherapy(char* name, double price, int duration, int startTime){
	cpy(name, price, duration, startTime);
}

Physiotherapy::~Physiotherapy(){
	delete[] name;
}

Physiotherapy& Physiotherapy::operator=(const Physiotherapy& other){
	if(this != &other){
		delete[] name;
		cpy(other.name, other.price, other.duration, other.startTime);
	}
	return *this;
}

Physiotherapy::Physiotherapy(const Physiotherapy& other){
	cpy(other.name, other.price, other.duration, other.startTime);
}

void Physiotherapy::setName(char* name){
	size_t len = strlen(name) + 1;
	this->name = new char[len];
	assert(this->name != NULL);
	strcpy_s(this->name, len, name);
}

void Physiotherapy::setDuration(int duration){
	this->duration = duration;
}

void Physiotherapy::setPrice(double price){
	this->price = price;
}

void Physiotherapy::setStartTime(int startTime){
	this->startTime = startTime;
}

char* Physiotherapy::getName()const{
	return this->name;
}

int Physiotherapy::getDuration()const{
	return this->duration;
}

double Physiotherapy::getPrice()const{
	return this->price;
}

int Physiotherapy::getStartTime()const{
	return this->startTime;
}



void Physiotherapy::printPhysiotherapy()const{
	cout << "Name : " << getName() << endl;
	cout << "Price : " << getPrice() << endl;
	cout << "Duration : " << getDuration() << endl;
	cout << "Start time : " << getStartTime() << endl;
}