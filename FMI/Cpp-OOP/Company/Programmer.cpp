#include <iostream>
#include <cassert>
#include "Programmer.h"
using namespace std;

void Programmer::cpy(char* _name, int _iq, double _salary){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
	iq = _iq;
	salary = _salary;
}
Programmer::Programmer(char* _name, int _iq, double _salary){
	cpy(_name, _iq, _salary);
}
Programmer::~Programmer(){
	delete[] name;
}
Programmer::Programmer(const Programmer& other){
	cpy(other.name, other.iq, other.salary);
}
Programmer& Programmer::operator=(const Programmer& other){
	if (this != &other){
		delete[] name;
		cpy(other.name, other.iq, other.salary);
	}
	return *this;
}
bool Programmer::operator<(const Programmer& other)const{
	return iq < other.iq;
}
bool Programmer::operator>(const Programmer& other)const{
	return iq > other.iq;
}
bool Programmer::operator==(const Programmer& other)const{
	return iq == other.iq;
}
void Programmer::setName(char* _name){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
}
void Programmer::setIq(int _iq){
	iq = _iq;
}
void Programmer::setSalary(double _salary){
	salary = _salary;
}
char* Programmer::getName()const{
	return name;
}
int Programmer::getIq()const{
	return iq;
}
double Programmer::getSalary()const{
	return salary;
}
void Programmer::print()const{
	cout << "Name: " << name << "   IQ: " << iq << "   salary: " << salary << endl;
}

//int main(){
//	Programmer me("Valio", 120, 2000.00);
//	me.print();
//	return 0;
//}