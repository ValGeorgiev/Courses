#include <iostream>
#include "People.h"
#include <cassert>
using namespace std;

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
	cout << "~People()" << endl;
	delete[] name;
	delete[] ucn;
}
void People::printPeople()const{
	cout << "Name: " << name << " UCN: " << ucn << endl;
}

Student::Student(char* _name, char* _ucn, long _facNumber, double _gpa) : People(_name, _ucn){
	facNumber = _facNumber;
	gpa = _gpa;
}
Student::~Student(){
	cout << "~Student()" << endl;
}
void Student::printStudent()const{
	printPeople();
	cout << "Fac. Number: " << facNumber << " GPA: " << gpa << endl;
}

PStudent::PStudent(char* _name, char* _ucn, long _facNumber, double _gpa, double _fee) : Student(_name, _ucn, _facNumber, _gpa){
	fee = _fee;
}
PStudent::~PStudent(){
	cout << "~PStudent()" << endl;
}
void PStudent::printPStudent()const{
	printStudent();
	cout << "Fee : " << fee << endl;
}

int main(){
	PStudent me("Valentin Georgiev", "9502070000", 71563, 5, 400);
	me.printPStudent();
	return 0;
}