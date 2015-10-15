#include <iostream>
#include <cassert>
#include "Developer.h"
#include "Manager.h" 
#include "Employee.h"
using namespace std;

Employee::Employee(){
	sizeManagers = 0;
	capacityManagers = 1;
	managers = new Manager[capacityManagers];
	sizeDevelopers = 0;
	capacityDevelopers = 1;
	developers = new Developer[capacityDevelopers];
}
Employee::~Employee(){
	delete[] managers;
	delete[] developers;
}
Employee::Employee(const Employee& other){
	sizeManagers = other.sizeManagers;
	capacityManagers = other.capacityManagers;
	managers = new Manager[capacityManagers];
	for (int i = 0; i < sizeManagers; i++){
		managers[i] = other.managers[i];
	}
	sizeDevelopers = other.sizeDevelopers;
	capacityDevelopers = other.capacityDevelopers;
	developers = new Developer[capacityDevelopers];
	for (int i = 0; i < sizeDevelopers; i++){
		developers[i] = other.developers[i];
	}
}
Employee& Employee::operator=(const Employee& other){
	if (this != &other){
		sizeManagers = other.sizeManagers;
		capacityManagers = other.capacityManagers;
		managers = new Manager[capacityManagers];
		for (int i = 0; i < sizeManagers; i++){
			managers[i] = other.managers[i];
		}
		sizeDevelopers = other.sizeDevelopers;
		capacityDevelopers = other.capacityDevelopers;
		developers = new Developer[capacityDevelopers];
		for (int i = 0; i < sizeDevelopers; i++){
			developers[i] = other.developers[i];
		}
	}
	return *this;
}
void Employee::addDeveloper(const Developer& newOne){
	if (sizeDevelopers == capacityDevelopers){
		capacityDevelopers *= 2;
		Developer* old = developers;
		developers = new Developer[capacityDevelopers];
		for (int i = 0; i < sizeDevelopers; i++){
			developers[i] = old[i];
		}
		delete[]old;
	}
	developers[sizeDevelopers++] = newOne;
}
void Employee::addManager(const Manager& newOne){
	if (sizeManagers == capacityManagers){
		capacityManagers *= 2;
		Manager* old = managers;
		managers = new Manager[capacityManagers];
		for (int i = 0; i < sizeManagers; i++){
			managers[i] = old[i];
		}
		delete[]old;
	}
	managers[sizeManagers++] = newOne;
}
void Employee::removeDeveloper(char* _name){
	for (int i = 0; i < sizeDevelopers; i++){
		if (!strcmp(developers[i].getName(), _name)){
			for (int j = i; j < sizeDevelopers - 1; j++){
				developers[j] = developers[j + 1];
			}
			sizeDevelopers--;
		}
	}
}
void Employee::removeManager(char* _name){
	for (int i = 0; i < sizeManagers; i++){
		if (!strcmp(managers[i].getName(), _name)){
			for (int j = i; j < sizeManagers - 1; j++){
				managers[j] = managers[j + 1];
			}
			sizeManagers--;
		}
	}
}
double Employee::monthCost(){
	double result = 0.0;
	for (int i = 0; i < sizeDevelopers; i++){
		result += developers[i].getSalary();
	}
	for (int i = 0; i < sizeManagers; i++){
		result += managers[i].getSalary();
	}
	return result / (sizeDevelopers + sizeManagers);
}
void Employee::correctSalaryDeveloper(int number, Developer& dev){
	double _salary = dev.getSalary() + number;
	dev.setSalary(_salary);
}
void Employee::correctSalaryManager(int number, Manager& man){
	double _salary = man.getSalary() + number;
	man.setSalary(_salary);
}
void Employee::print()const{
	for (int i = 0; i < sizeDevelopers; i++){
		developers[i].print();
	}
	for (int i = 0; i < sizeManagers; i++){
		managers[i].print();
	}
}


int main(){
	Employee fmi;

	Developer ivan("Ivan", 2, 1000, true, false);
	Developer pesho("Pesho", 4, 1200, true, true);
	Developer marin("Marin", 1, 500, false, false);
	Developer valio("Valio", 10, 10000, true, true);
	Developer gosho("Gosho", 8, 5000, true, true);

	fmi.addDeveloper(ivan);
	fmi.addDeveloper(pesho);
	fmi.addDeveloper(marin);
	fmi.addDeveloper(valio);
	fmi.addDeveloper(gosho);

	Manager lubo("Lubo", 12, 2, 11000);
	Manager toshko("Toshko", 4, 1, 7000);
	
	fmi.addManager(lubo);
	fmi.addManager(toshko);

	fmi.print();



}