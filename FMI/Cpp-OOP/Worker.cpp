#include <iostream>
#include <cassert>
#include "Worker.h"
using namespace std;

Worker::Worker(const char* _name, double _salaryPerHour){
	size_t length = strlen(_name) + 1;
	name = new char[length];
	assert(name != NULL);
	strcpy_s(name, length, _name);
	salaryPerHour = _salaryPerHour;
}
Worker::~Worker(){
	delete[] name;
}
Worker& Worker::operator=(const Worker& other){
	if (this != &other){
		delete[] name;
		size_t length = strlen(other.name) + 1;
		name = new char[length];
		assert(name != NULL);
		strcpy_s(name, length, other.name);
		salaryPerHour = other.salaryPerHour;
	}
	return *this;
}
Worker::Worker(const Worker& other){
	size_t length = strlen(other.name) + 1;
	name = new char[length];
	assert(name != NULL);
	strcpy_s(name, length, other.name);
	salaryPerHour = other.salaryPerHour;
}
void Worker::print()const{
	cout << "Name: " << name << " Salary per hour: " << salaryPerHour << endl;
}
double Worker::getSalary()const{
	return salaryPerHour;
}

HourlyWorker::HourlyWorker(const char* _name, double _salaryPerHour, const char* _kindOfWork, int _hours) : Worker(_name, _salaryPerHour){
	size_t len = strlen(_kindOfWork) + 1;
	kindOfWork = new char[len];
	assert(kindOfWork != NULL);
	strcpy_s(kindOfWork, len, _kindOfWork);
	hours = _hours;
}
HourlyWorker::~HourlyWorker(){
	delete[] kindOfWork;
}
HourlyWorker::HourlyWorker(const HourlyWorker& other){
	size_t len = strlen(other.kindOfWork) + 1;
	kindOfWork = new char[len];
	assert(kindOfWork != NULL);
	strcpy_s(kindOfWork, len, other.kindOfWork);
	hours = other.hours;
}
HourlyWorker& HourlyWorker::operator=(const HourlyWorker& other){
	if (this != &other){
		delete[] kindOfWork;
		size_t len = strlen(other.kindOfWork) + 1;
		kindOfWork = new char[len];
		assert(kindOfWork != NULL);
		strcpy_s(kindOfWork, len, other.kindOfWork);
		hours = other.hours;
	}
	return *this;
}
double HourlyWorker::weekSalary()const{
	double tmp,
		salary = getSalary();
	if (hours <= 40){
		tmp = hours * salary;
	}
	else{
		if (hours <= 60){
			tmp = 40 * salary + (hours - 40) * 1.5 * salary;
		}
		else{
			tmp = 40 * salary + 20 * 1.5 * salary + (hours - 60) * 2 * salary;
		}
	}
	return tmp;
}
void HourlyWorker::print()const{
	cout << "Hours : " << hours << " Kind of work: " << kindOfWork << " Week salary: " << weekSalary() << endl;
}

SalariedWorker::SalariedWorker(const char* _name, double _salaryPerHour, const char* _kindOfWork, int _hours) : Worker(_name, _salaryPerHour){
	size_t len = strlen(_kindOfWork) + 1;
	kindOfWork = new char[len];
	assert(kindOfWork != NULL);
	strcpy_s(kindOfWork, len, _kindOfWork);
	hours = _hours;
}
SalariedWorker::~SalariedWorker(){
	delete[] kindOfWork;
}
SalariedWorker::SalariedWorker(const SalariedWorker& other){
	size_t len = strlen(other.kindOfWork) + 1;
	kindOfWork = new char[len];
	assert(kindOfWork != NULL);
	strcpy_s(kindOfWork, len, other.kindOfWork);
	hours = other.hours;
}
SalariedWorker& SalariedWorker::operator=(const SalariedWorker& other){
	if (this != &other){
		delete[] kindOfWork;
		size_t len = strlen(other.kindOfWork) + 1;
		kindOfWork = new char[len];
		assert(kindOfWork != NULL);
		strcpy_s(kindOfWork, len, other.kindOfWork);
		hours = other.hours;
	}
	return *this;
}
double SalariedWorker::weekSalary()const{
	return 40 * getSalary();
}
void SalariedWorker::print()const{
	cout << "Hours : " << this->hours << " Kind of work: " << this->kindOfWork << " Week salary: " << this->weekSalary() << endl;
}



int main(){
	SalariedWorker you("ivan", 10.0, "engineer", 40);
	HourlyWorker me("valentin", 20.0, "programmer", 60);

	me.print();
	you.print();

	return 0;
}