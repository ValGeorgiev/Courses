#include <iostream>
#include <cassert>
#include "Group.h"
using namespace std;

void Group::cpy(char* _name, int _memberCount, Musician** const _members){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
	memberCount = _memberCount;
	for (int i = 0; i < memberCount; i++){
		members[i] = _members[i];
	}
}
Group::Group(char* _name){
	cpy(_name);
}
Group::~Group(){
	delete[]name;
}
Group::Group(const Group& other){
	cpy(other.name);
}
Group& Group::operator=(const Group& other){
	if (this != &other){
		delete[]name;
		cpy(other.name);
	}
	return *this;
}
void Group::addMusician(Musician& newOne){
	if (memberCount == 10){
		cout << "No enough space for new musician!" << endl;
		return;
	}
	members[memberCount++] = &newOne;
}
void Group::removeMusician(char* _name){
	for (int i = 0; i < memberCount; i++){
		if (!strcmp(members[i]->getName(), _name)){
			for (int j = i; j < memberCount - 1; j++){
				members[j] = members[j + 1];
			}
			memberCount--;
			break;
		}
	}
}
char* Group::getName()const{
	return name;
}
void Group::setName(char* _name){
	size_t len = strlen(_name) + 1;
	name = new char[len];
	assert(name != NULL);
	strcpy_s(name, len, _name);
}
double Group::getAverageBeauty(){
	double result = 0;
	for (int i = 0; i < memberCount; i++){
		result += members[i]->getBeauty();
	}
	return result / memberCount;
}
void Group::print()const{
	for (int i = 0; i < memberCount; i++){
		members[i]->print();
	}
}

RockGroup::RockGroup(char* _name) : Group(_name){}
RockGroup::RockGroup(const RockGroup& other) : Group(other){}
RockGroup& RockGroup::operator=(const RockGroup& other){
	if (this != &other){
		Group::operator=(other);
	}
	return *this;
}
void RockGroup::addMusician(Musician& newOne){
	if (!strcmp(newOne.getType(), "rock") || newOne.getMaxSkill() > 100){
		return Group::addMusician(newOne);
	}
}
double RockGroup::getValue(){
	double sum = 0;
	for (int i = 0; i < memberCount; i++){
		sum += (members[i]->sumAllSkill() - members[i]->getSins());
	}
	return sum;
}


FolkGroup::FolkGroup(char* _name) : Group(_name){}
FolkGroup::FolkGroup(const FolkGroup& other) : Group(other){}
FolkGroup& FolkGroup::operator=(const FolkGroup& other){
	if (this != &other){
		Group::operator=(other);
	}
	return *this;
}
void FolkGroup::addMusician(Musician& newOne){
	if (strcmp("rock_tack", newOne.getType()) == 0 ||
		(newOne.getMinSkill() < 10 && newOne.getMinSkill() != -1)) {
		return Group::addMusician(newOne);
	}
}
double FolkGroup::getValue(){
	double sum = 0;
	for (int i = 0; i < memberCount; i++) {
		sum += members[i]->sumAllSkill() + members[i]->getBeauty();
	}
	return sum;
}


void FolkRockGroup::addMusician(Musician& newOne) {
	RockGroup::addMusician(newOne);
	FolkGroup::addMusician(newOne);
}

double FolkRockGroup::getValue() {
	double sum = 0;
	for (int i = 0; i < memberCount; i++) {
		sum += members[i]->sumAllSkill() + members[i]->getBeauty();
	}
	int changesCount = 0;
	for (int i = 0; i < memberCount - 1; i++) {
		if (strcmp(members[i]->getType(), members[i + 1]->getType()) != 0) {
			changesCount++;
		}
	}
	return sum - changesCount;
}

FolkRockGroup::FolkRockGroup(char* _name) : Group(_name), RockGroup(_name), FolkGroup(_name){}
FolkRockGroup::FolkRockGroup(const FolkRockGroup& other) : Group(other), RockGroup(other), FolkGroup(other){}
FolkRockGroup& FolkRockGroup::operator=(const FolkRockGroup& other) {
	if (this != &other){
		Group::operator=(other);
		RockGroup::operator=(other);
		FolkGroup::operator=(other);
	}
	return *this;
}


int main(){
	MusicSkill skills[5];
	skills[0] = MusicSkill("bass", 120);
	skills[1] = MusicSkill("bas", 100);
	skills[2] = MusicSkill("ba", 40);
	skills[3] = MusicSkill("b", 142);
	skills[4] = MusicSkill("basss", 222);

	RockStar pesho("Pesho", 1, 2);
	RockStar gosho("Gosho", 1, 2);
	FolkStar azis("Azis", 1, 2, 1);
	FolkStar amet("Amet", 1, 2, 0);
	FolkStar kriza("Kriza", 1, 2, 1);

	Musician* musician[5];
	musician[0] = &pesho;
	musician[1] = &gosho;
	musician[2] = &azis;
	musician[3] = &amet;
	musician[4] = &kriza;
	
	RockGroup rock("ACDC");
	FolkGroup folk("OPA");
	FolkRockGroup mix("MIX");
	Group* groups[3];
	groups[0] = &rock;
	groups[1] = &folk;
	groups[2] = &mix;
	pesho.addSkill(skills[4]);
	pesho.addSkill(skills[3]);
	pesho.print();
	cout << endl;
	rock.addMusician(pesho);
	rock.addMusician(gosho);

	cout << endl;
	rock.removeMusician("Pesho");
	rock.print();
	mix.addMusician(gosho);
	mix.addMusician(azis);
	mix.addMusician(pesho);
	mix.print();
	cout << endl << mix.getAverageBeauty();

}