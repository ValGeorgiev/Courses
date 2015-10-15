#include <iostream>
#include <cassert>
#include <cmath>
#include "MusicSkill.h"
#include "Musician.h"
#define M_PI 3.14159265358979323846
using namespace std;

void Musician::cpy(char* _name, int _beauty, int _sins, int _skillsCount, const MusicSkill* _skills){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
	beauty = _beauty;
	sins = _sins;
	skillsCount = _skillsCount;
	for (int i = 0; i < skillsCount; i++){
		skills[i] = _skills[i];
	}
}
Musician::Musician(char* _name, int _beauty, int _sins){
	cpy(_name, _beauty, _sins);
}
Musician::~Musician(){
	delete[] name;
}
Musician::Musician(const Musician& other){
	cpy(other.name, other.beauty, other.sins, other.skillsCount, other.skills);
}
Musician& Musician::operator=(const Musician& other){
	if (this != &other){
		delete[] name;
		cpy(other.name, other.beauty, other.sins, other.skillsCount, other.skills);
	}
	return *this;
}
void Musician::print(){
	cout << "Name: " << name << "    Beauty: " << beauty << "   Sins: " << sins << endl;
	for (int i = 0; i < skillsCount; i++){
		skills[i].print();
	}
	cout << endl;
}
void Musician::addSkill(MusicSkill& newOne){
	if (skillsCount == 5){
		cout << "No enough space for new skill!" << endl;
	}
	else{
		skills[skillsCount++] = newOne;
		sortSkill();
	}
}
void Musician::sortSkill(){
	MusicSkill tmp;
	for (int i = 0; i < skillsCount - 1; i++){
		for (int j = i + 1; j < skillsCount; j++){
			if (skills[j - 1].getSkill() > skills[j].getSkill()){
				tmp = skills[j - 1];
				skills[j - 1] = skills[j];
				skills[j] = tmp;
			}
		}
	}
}
int Musician::getMinSkill(){
	int min = skills[0].getSkill();

	for (int i = 1; i < skillsCount; i++){
		if (min > skills[i].getSkill()){
			min = skills[i].getSkill();
		}
	}
	return min;
}
int Musician::getMaxSkill(){
	int max = skills[0].getSkill();
	for (int i = 1; i < skillsCount; i++){
		if (max < skills[i].getSkill()){
			max = skills[i].getSkill();
		}
	}
	return max;
}
int Musician::sumAllSkill(){
	int sum = 0;
	for (int i = 0; i < skillsCount; i++){
		sum += skills[i].getSkill();
	}
	return sum;
}
int Musician::getSins()const{
	return sins;
}
char* Musician::getName()const{
	return name;
}
void Musician::setName(char* _name){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
}

char* RockStar::getType(){
	return "rock";
}
void RockStar::print(){
	Musician::print();
	cout << "Type: " << getType() << endl;
}
double RockStar::getBeauty(){
	int sum = Musician::sumAllSkill();
	return beauty * beauty + sum - sins * 3 * M_PI;
}
RockStar::RockStar(char* _name, int _beauty, int _sins) :Musician(_name, _beauty, _sins){}
RockStar::RockStar(const RockStar& other): Musician(other){}
RockStar& RockStar::operator=(const RockStar& other){
	if (this != &other){
		Musician::operator=(other);
	}
	return *this;
}

FolkStar::FolkStar(char* _name, int _beauty, int _sins, bool _race) : Musician(_name, _beauty, _sins){
	race = _race;
}
FolkStar::FolkStar(const FolkStar& other) : Musician(other){
	race = other.race;
}
FolkStar& FolkStar::operator=(const FolkStar& other){
	if (this != &other){
		Musician::operator=(other);
		race = other.race;
	}
	return *this;
}
char* FolkStar::getType(){
	return "folk";
}
void FolkStar::print(){
	Musician::print();
	cout << "Type: " << getType() << "  Race: " << race << endl;
}
double FolkStar::getBeauty(){
	int skill = 0;
	if (skillsCount > 0) {
		skill = skills[0].getSkill();
		for (int i = 1; i < skillsCount; i++) {
			if (skills[i].getSkill() > skill) {
				skill = skills[i].getSkill();
			}
		}
	}
	return pow(beauty, 5) + sins + race * cos(skill);
}

