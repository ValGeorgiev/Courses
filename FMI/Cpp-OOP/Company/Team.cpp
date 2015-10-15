#include <iostream>
#include <cassert>
#include "Programmer.h"
#include "Team.h"
using namespace std;

Team::Team(char* _name){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
	size = 0;
	capacity = 1;
	programmers = new Programmer[capacity];
}
Team::~Team(){
	delete[] name;
	delete[] programmers;
}
Team& Team::operator=(const Team& other){
	if (this != &other){
		delete[] name;
		delete[] programmers;
		size_t len = strlen(other.name) + 1;
		name = new char[len];
		assert(name != NULL);
		strcpy_s(name, len, other.name);
		size = other.size;
		capacity = other.capacity;
		programmers = new Programmer[capacity];
		for (int i = 0; i < size; i++){
			programmers[i] = other.programmers[i];
		}
	}
	return *this;
}
Team::Team(const Team& other){
	size_t len = strlen(other.name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, other.name);
	size = other.size;
	capacity = other.capacity;
	programmers = new Programmer[capacity]; 
	for (int i = 0; i < size; i++){
		programmers[i] = other.programmers[i];
	}
}
void Team::addProgrammer(const Programmer& newGuy){
	if (size == capacity){
		capacity *= 2;
		Programmer* old = programmers;
		programmers = new Programmer[capacity];
		for (int i = 0; i < size; i++){
			programmers[i] = old[i];
		}
		delete[] old;
	}
	programmers[size++] = newGuy;
}
void Team::removeProgrammer(const Programmer& quitGuy){
	for (int i = 0; i < size; i++){
		if (!strcmp(programmers[i].getName(), quitGuy.getName())){
			for (int j = i + 1; j < size; j++){
				programmers[j - 1] = programmers[j];
			}
			--size;
		}
	}
}
Programmer& Team::getProgrammer(char* _name){
	for (int i = 0; i < size; i++){
		if (!strcmp(programmers[i].getName(), _name)){
			return programmers[i];
		}
	}
}
void Team::sort(){
	Programmer tmp;
	for (int i = 0; i < size - 1; i++){
		for (int j = i + 1; j < size; j++){
			if (programmers[j - 1].getIq() > programmers[j].getIq()){
				tmp = programmers[j];
				programmers[j] = programmers[j - 1];
				programmers[j - 1] = tmp;
			}
		}
	}
	return;
}
double Team::avgIQ()const{
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum += programmers[i].getIq();
	}
	return (sum / size);
}
void Team::print()const{
	for (int i = 0; i < size; i++){
		programmers[i].print();
	}
}

//int main(){
//	Programmer ivan("Ivan", 100, 5000);
//	Programmer pesho("Pesho", 99, 1000);
//	Programmer valio("Valio", 200, 200000);
//	Team fmi("fmi");
//	fmi.addProgrammer(ivan);
//	fmi.addProgrammer(pesho);
//	fmi.addProgrammer(valio);
//
//	fmi.print();
//	fmi.sort();
//	cout << endl;
//	fmi.print();
//	cout << fmi.avgIQ() << endl;
//	return 0;
//}