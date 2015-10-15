#include <iostream>
#include <cassert>
#include "Developer.h"
using namespace std;


void Developer::cpy(char* _name, int _internship, double _salary, bool _cplusplus, bool _csharp){
	size_t len = strlen(_name);
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
	internship = _internship;
	salary = _salary;
	cplusplus = _cplusplus;
	csharp = _csharp;
}
Developer::Developer(char* _name, int _internship, double _salary, bool _cplusplus, bool _csharp){
	cpy(_name, _internship, _salary, _cplusplus, _csharp);
}
Developer::~Developer(){
	delete[] name;
}
Developer::Developer(const Developer& other){
	cpy(other.name, other.internship, other.salary, other.cplusplus, other.csharp);
}
Developer& Developer::operator=(const Developer& other){
	if (this != &other){
		delete[] name;
		cpy(other.name, other.internship, other.salary, other.cplusplus, other.csharp);
	}
	return *this;
}
char* Developer::getName()const{
	return name;
}
int Developer::getInternship()const{
	return internship;
}
double Developer::getSalary()const{
	return salary;
}
bool Developer::getCPlusPlus()const{
	return cplusplus;
}
bool Developer::getCSharp()const{
	return csharp;
}
void Developer::setName(char* _name){
	size_t len = strlen(_name);
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
}
void Developer::setSalary(double _salary){
	salary = _salary;
}
void Developer::setInternship(int _internship){
	internship = _internship;
}
void Developer::setCPlusPlus(bool _cplusplus){
	cplusplus = _cplusplus;
}
void Developer::setCSharp(bool _csharp){
	csharp = _csharp;
}
void Developer::print()const{
	cout << "Developer: " << endl;
	cout << "Name: " << name << "   Internship: " << internship
		<< "    Salary: " << salary << "   C++: " << cplusplus << "   C#: " << csharp << endl;
}
