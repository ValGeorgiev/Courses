#include <iostream>
#include <cassert>
#include "Card.h"
using namespace std;


void Card::cpy(char* _lastName, int _day, int _month, int _year){
	size_t len = strlen(_lastName) + 1;
	lastName = new char[len];
	assert(lastName != NULL);
	strcpy_s(lastName, len, _lastName);
	if (_day > 31 && _day < 0){
		cout << "Invalid day! " << endl;
		return;
	}
	else{
		day = _day;
	}
	if (_month > 12 && _month < 1){
		cout << "Invalid month" << endl;
		return;
	}
	else{
		month = _month;
	}
	if (_year > 2015 && _year < 1900){
		cout << "Invalid year" << endl;
		return;
	}
	else{
		year = _year;
	}
}
Card::Card(char* _lastName, int _day, int _month, int _year){
	cpy(_lastName, _day, _month, _year);
}
Card::~Card(){
	delete[] lastName;
}
Card::Card(const Card& other){
	cpy(other.lastName, other.day, other.month, other.year);
}
Card& Card::operator=(const Card& other){
	if (this != &other){
		delete[] lastName;
		cpy(other.lastName, other.day, other.month, other.year);
	}
	return *this;
}
void Card::setLastName(char* _lastName){
	size_t len = strlen(_lastName) + 1;
	lastName = new char[len];
	assert(lastName != NULL);
	strcpy_s(lastName, len, _lastName);
}
void Card::setDay(int _day){
	day = _day;
}
void Card::setMonth(int _month){
	month = _month;
}
int Card::getDay()const{
	return day;
}
int Card::getMonth()const{
	return month;
}
int Card::getYear()const{
	return year;
}
char* Card::getLastName()const{
	return lastName;
}
void Card::print()const{
	cout << "Last Name: " << lastName << " Date : " << day << "/" << month << "/" << year << endl;
}


//int main(){
//	Card mine("Georgiev", 07, 02, 1995);
//	mine.print();
//	return 0;
//}