#include <iostream>
#include <cassert>
#include "Manager.h"
using namespace std;


void Manager::cpy(char* _name, int _internship, int _people, double _salary){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
	internship = _internship;
	people = _people;
	salary = _salary;
}
Manager::Manager(char* _name, int _internship, int _people, double _salary){
	cpy(_name, _internship, _people, _salary);
}
Manager::~Manager(){
	delete[] name;
}
Manager& Manager::operator=(const Manager& other){
	if (this != &other){
		delete[] name;
		cpy(other.name, other.internship, other.people, other.salary);
	}
	return *this;
}
Manager::Manager(const Manager& other){
	cpy(other.name, other.internship, other.people, other.salary);
}
char* Manager::getName()const{
	return name;
}
int Manager::getInternship()const{
	return internship;
}
int Manager::getPeople()const{
	return people;
}
double Manager::getSalary()const{
	return salary;
}
void Manager::setName(char* _name){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
}
void Manager::setInternship(int _internship){
	internship = _internship;
}
void Manager::setPeople(int _people){
	people = _people;
}
void Manager::setSalary(double _salary){
	salary = _salary;
}
void Manager::print()const{
	cout << "Manager:" << endl;
	cout << "Name: " << name << "	internship:	" << internship << "	people: " << people << "	salary:	" << salary << endl;
}
