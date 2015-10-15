#include<iostream>
#include "Programmer.h"
#include "Team.h"
#include "Company.h"
using namespace std;

Company::Company(){
	capacity = 1;
	size = 0;
	teams = new Team[capacity];
}
Company::~Company(){
	for (int i = 0; i < size; i++){
		delete[] (teams + i);
	}
	delete[]teams;
}
Company::Company(const Company& other){
	size = other.size;
	capacity = other.capacity;
	teams = new Team[capacity];
	for (int i = 0; i < size; i++){
		teams[i] = other.teams[i];
	}
}
Company& Company::operator=(const Company& other){
	if (this != &other){
		for (int i = 0; i < size; i++){
			delete[](teams + i);
		}
		delete[]teams;
		size = other.size;
		capacity = other.capacity;
		teams = new Team[capacity];
		for (int i = 0; i < size; i++){
			teams[i] = other.teams[i];
		}
	}
	return *this;
}
void Company::print()const{
	for (int i = 0; i < size; i++){
		teams[i].print();
	}
}
double Company::averageIQ()const{
	double sum = 0.0;
	for (int i = 0; i < size; i++){
		sum += teams[i].avgIQ();
	}
	return sum / size;
}
int main(){
	Company GH();
	return 0;
}