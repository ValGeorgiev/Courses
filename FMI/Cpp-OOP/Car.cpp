#include <iostream>
#include <cassert>
#include "Car.h"
using namespace std;

Car::Car(char* _brand, char* _registrationNumber, int _year){
	size_t len = strlen(_brand) + 1;
	brand = new char[len];
	assert(brand != NULL);
	strcpy_s(brand, len, _brand);
	size_t length = strlen(_registrationNumber) + 1;
	registrationNumber = new char[length];
	assert(registrationNumber != NULL);
	strcpy_s(registrationNumber, length, _registrationNumber);
	year = _year;
}
Car::~Car(){
	delete[] brand;
	delete[] registrationNumber;
}
Car::Car(const Car& other){
	size_t len = strlen(other.brand) + 1;
	brand = new char[len];
	assert(brand != NULL);
	strcpy_s(brand, len, other.brand);
	size_t length = strlen(other.registrationNumber) + 1;
	registrationNumber = new char[length];
	assert(registrationNumber != NULL);
	strcpy_s(registrationNumber, length, other.registrationNumber);
	year = other.year;
}
Car& Car::operator=(const Car& other){
	if (this != &other){
		delete[] brand;
		delete[] registrationNumber;
		size_t len = strlen(other.brand) + 1;
		brand = new char[len];
		assert(brand != NULL);
		strcpy_s(brand, len, other.brand);
		size_t length = strlen(other.registrationNumber) + 1;
		registrationNumber = new char[length];
		assert(registrationNumber != NULL);
		strcpy_s(registrationNumber, length, other.registrationNumber);
		year = other.year;
	}
	return *this;
}
void Car::print()const{
	cout << "Brand: " << brand << endl << "Registration number: " << registrationNumber << endl << "Year: " << year << endl;
}

People::People(char* _name, char* _ucn){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
	size_t length = strlen(_ucn) + 1;
	ucn = new char[length];
	assert(ucn != NULL);
	strcpy_s(ucn, length, _ucn);
}
People::~People(){
	delete[] name;
	delete[] ucn;
}
People::People(const People& other){
	size_t len = strlen(other.name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, other.name);
	size_t length = strlen(other.ucn) + 1;
	ucn = new char[length];
	assert(ucn != NULL);
	strcpy_s(ucn, length, other.ucn);
}

People& People::operator=(const People& other){
	if (this != &other){
		size_t len = strlen(other.name) + 1;
		name = new char[len];
		assert(name != NULL);
		strcpy_s(name, len, other.name);
		size_t length = strlen(other.ucn) + 1;
		ucn = new char[length];
		assert(ucn != NULL);
		strcpy_s(ucn, length, other.ucn);
	}
	return *this;
}
void People::print()const{
	cout << "Name: " << name << endl << "UCN: " << ucn << endl;
}

CarPassport::CarPassport(char* _brand, char* _registrationNumber, int _year, char* _name, char* _ucn) : Car(_brand, _registrationNumber, _year),
People(_name, _ucn){}

CarPassport::~CarPassport(){}
CarPassport::CarPassport(const CarPassport& other) : Car(other), People(other){}
CarPassport& CarPassport::operator=(const CarPassport& other){
	if (this != &other){
		Car::operator=(other);
		People::operator=(other);
	}
	return *this;
}
void CarPassport::print()const{
	Car::print();
	People::print();
}

int main(){
	CarPassport myCar("Audi", "C777777", 2016, "Valentin", "9502070000");
	myCar.print();

	return 0;
}