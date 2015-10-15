#include <iostream>
#include <cassert>
#include "MusicSkill.h"
using namespace std;

void MusicSkill::cpy(char* _instrument, int _skill){
	size_t len = strlen(_instrument) + 1;
	instrument = new char[len];
	assert(instrument != NULL);
	strcpy_s(instrument, len, _instrument);
	skill = _skill;
}
MusicSkill::MusicSkill(char* _instrument, int _skill){
	cpy(_instrument, _skill);
}
MusicSkill::~MusicSkill(){
	delete[]instrument;
}
MusicSkill& MusicSkill::operator=(const MusicSkill& other){
	if (this != &other){
		delete[] instrument;
		cpy(other.instrument, other.skill);
	}
	return *this;
}
MusicSkill::MusicSkill(const MusicSkill& other){
	cpy(other.instrument, other.skill);
}
int MusicSkill::getSkill()const{
	return skill;
}
char* MusicSkill::getInstrument()const{
	return instrument;
}
void MusicSkill::setInstrument(char* _instrument){
	size_t len = strlen(_instrument) + 1;
	instrument = new char[len];
	assert(instrument != NULL);
	strcpy_s(instrument, len, _instrument);
}
void MusicSkill::setSkill(int _skill){
	skill = _skill;
}
void MusicSkill::print()const{
	cout << "Instrument : " << instrument << "   skill : " << skill << endl;
}
//int main(){
//	MusicSkill me("piano", 99);
//	me.print();
//	return 0;
//}