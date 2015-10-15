#include <iostream>
#include <cassert>
#include "Vehicle.h"
using namespace std;

void Vehicle::cpy(char* _producer, char* _number){
	size_t len = strlen(_producer) + 1;
	producer = new char[len];
	assert(producer != NULL);
	strcpy_s(producer, len, _producer);
	size_t length = strlen(_number) + 1;
	number = new char[length];
	assert(number != NULL);
	strcpy_s(number, length, _number);
}
Vehicle::Vehicle(char* _producer, char* _number){
	cpy(_producer, _number);
}
Vehicle::~Vehicle(){
	delete[] producer;
	delete[] number;
}
Vehicle::Vehicle(const Vehicle& other){
	cpy(other.producer, other.number);
}
Vehicle& Vehicle::operator=(const Vehicle& other){
	if (this != &other){
		delete[] producer;
		delete[] number;
		cpy(other.producer, other.number);
	}
	return *this;
}
char* Vehicle::getProducer()const{
	return producer;
}
char* Vehicle::getNumber()const{
	return number;
}
void Vehicle::setNumber(char* _number){
	size_t len = strlen(_number) + 1;
	number = new char[len];
	assert(number != NULL);
	strcpy_s(number, len, _number);
}
void Vehicle::print()const{
	cout << "Producer : " << producer << "  Number:  " << number << endl;
}

void Car::cpy(char* _model, int _maxSpeed){
	size_t len = strlen(_model) + 1;
	model = new char[len];
	assert(model != NULL);
	strcpy_s(model, len, _model);
	maxSpeed = _maxSpeed;
}
Car::Car(char* _producer, char* _number, char* _model, int _maxSpeed) : Vehicle(_producer, _number){
	cpy(_model, _maxSpeed);
}
Car::~Car(){
	delete[] model;
}
Car& Car::operator=(const Car& other){
	if (this != &other){
		Vehicle::operator=(other);
		delete[] model;
		cpy(other.model, other.maxSpeed);
	}
	return *this;
}
Car::Car(const Car& other){
	cpy(other.model, other.maxSpeed);
}
int Car::getMaxSpeed()const{
	return maxSpeed;
}
char* Car::getModel()const{
	return model;
}
void Car::setMaxSpeed(int _maxSpeed){
	maxSpeed = _maxSpeed;
}
void Car::setModel(char* _model){
	size_t len = strlen(_model) + 1;
	model = new char[len];
	assert(model != NULL);
	strcpy_s(model, len, _model);
}
void Car::print()const{
	Vehicle::print();
	cout << "Model: " << model << "  Max Speed:  " << maxSpeed << endl;
	cout << endl;
}

void Bicycle::cpy(char* _model, int _maxSpeed, int _numberOfSpeed){
	size_t len = strlen(_model) + 1;
	model = new char[len];
	assert(model != NULL);
	strcpy_s(model, len, _model);
	maxSpeed = _maxSpeed;
	numberOfSpeed = _numberOfSpeed;
}
Bicycle::Bicycle(char* _producer, char* _number, char* _model, int _maxSpeed, int _numberOfSpeed) : Vehicle(_producer, _number){
	cpy(_model, _maxSpeed, _numberOfSpeed);
}
Bicycle::~Bicycle(){
	delete[] model;
}
Bicycle::Bicycle(const Bicycle& other){
	cpy(other.model, other.maxSpeed, other.numberOfSpeed);
}
Bicycle& Bicycle::operator=(const Bicycle& other){
	if (this != &other){
		Vehicle::operator=(other);
		delete[] model;
		cpy(other.model, other.maxSpeed, other.numberOfSpeed);
	}
	return *this;
}
char* Bicycle::getModel()const{
	return model;
}
int Bicycle::getMaxSpeed()const{
	return maxSpeed;
}
int Bicycle::getNumberOfSpeed()const{
	return numberOfSpeed;
}
void Bicycle::setModel(char* _model){
	size_t len = strlen(_model) + 1;
	model = new char[len];
	assert(model != NULL);
	strcpy_s(model, len, _model);
}
void Bicycle::setMaxSpeed(int _maxSpeed){
	maxSpeed = _maxSpeed;
}
void Bicycle::setNumberOfSpeed(int _numberOfSpeed){
	numberOfSpeed = _numberOfSpeed;
}
void Bicycle::print()const{
	Vehicle::print();
	cout << "Model : " << model << "  Max speed :  " << maxSpeed << "   Number of speed :  " << numberOfSpeed << endl;
	cout << endl;
}
int main(){
	Bicycle balkan("BMW", "CB1111KM", "Balkan", 45, 7);
	Car audi("Audi", "CB777777", "R8", 320);
	balkan.print();
	audi.print();
	audi.setMaxSpeed(350);
	audi.print();
	return 0;
}