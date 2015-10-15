#include <iostream>
#include <cassert>
#include "Card.h"
#include "ListPerson.h"
using namespace std;

void Zodiac::cpy(char* _name, int _startDay, int _finalDay, int _startMonth, int _finalMonth){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
	startDay = _startDay;
	finalDay = _finalDay;
	startMonth = _startMonth;
	finalMonth = _finalMonth;
}
Zodiac::Zodiac(char* _name, int _startDay, int _finalDay, int _startMonth, int _finalMonth){
	cpy(_name, _startDay, _finalDay, _startMonth, _finalMonth);
}
Zodiac::~Zodiac(){
	delete[] name;
}
Zodiac& Zodiac::operator=(const Zodiac& other){
	if (this != &other){
		delete[]name;
		cpy(other.name, other.startDay, other.finalDay, other.startMonth, other.finalMonth);
	}
	return *this;
}
Zodiac::Zodiac(const Zodiac& other){
	cpy(other.name, other.startDay, other.finalDay, other.startMonth, other.finalMonth);
}
void Zodiac::setName(char* _name){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
}
void Zodiac::setFinalDay(int _finalDay){
	finalDay = _finalDay;
}
void Zodiac::setFinalMonth(int _finalMonth){
	finalMonth = _finalMonth;
}
void Zodiac::setStartDay(int _startDay){
	startDay = _startDay;
}
void Zodiac::setStartMonth(int _startMonth){
	startMonth = _startMonth;
}
char* Zodiac::getName()const{
	return name;
}
int Zodiac::getFinalDay()const{
	return finalDay;
}
int Zodiac::getFinalMonth()const{
	return finalMonth;
}
int Zodiac::getStartDay()const{
	return startDay;
}
int Zodiac::getStartMonth()const{
	return startMonth;
}
void Zodiac::print()const{
	cout << "name: " << name << "  Start day: " << startDay << "  Final Day: " << finalDay << "  start Month: " << startMonth << "  final Month: " << finalMonth << endl;
}


ListPerson::ListPerson(){
	size = 0;
	capacity = 1;
	cards = new Card[capacity];
}
ListPerson::~ListPerson(){
	delete[]zodiacs;
	delete[]cards;
}
ListPerson& ListPerson::operator=(const ListPerson& other){
	if (this != &other){
		delete[] cards;
		capacity = other.capacity;
		size = other.size;
		cards = new Card[capacity];
		for (int i = 0; i < size; i++){
			cards[i] = other.cards[i];
		}
	}
	return *this;
}
ListPerson::ListPerson(const ListPerson& other){
	capacity = other.capacity;
	size = other.size;
	cards = new Card[capacity];
	for (int i = 0; i < size; i++){
		cards[i] = other.cards[i];
	}
}
void ListPerson::addCard(const Card& newOne){
	if (size == capacity){
		capacity *= 2;
		Card* old = cards;
		cards = new Card[capacity];
		for (int i = 0; i < size; i++){
			cards[i] = old[i];
		}
		delete[]old;
	}
	cards[size++] = newOne;
}
void ListPerson::removeCard(char* _name){
	for (int i = 0; i < size - 1; i++){
		if (!strcmp(cards[i].getLastName(), _name)){
			for (int j = i + 1; j < size; j++){
				cards[j - 1] = cards[j];
			}
			--size;
		}
	}
}
Card& ListPerson::getCard(char* _name){
	for (int i = 0; i < size; i++){
		if (!strcmp(cards[i].getLastName(), _name)){
			return cards[i];
		}
	}
}

//int main(){
//	Card mine("Georgiev", 2, 7, 1995);
//	ListPerson fmi;
//	fmi.addCard(mine);
//	return 0;
//}