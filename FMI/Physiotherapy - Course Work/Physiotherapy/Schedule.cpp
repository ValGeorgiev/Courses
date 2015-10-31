#include<iostream>
#include<fstream>
#include "Schedule.h"
using namespace std;

ofstream myFile;

Schedule::Schedule(){
	size = 0;
	capacity = 1;
	physiotherapies = new Physiotherapy[capacity];
	for (int i = 0; i < hours; i++)
	{
		freeHours[i] = false;
	}
}
Schedule::~Schedule(){
	delete[] physiotherapies;
}
Schedule& Schedule::operator=(const Schedule& other){
	if (this != &other){
		delete[] physiotherapies;
		size = other.size;
		capacity = other.capacity;
		physiotherapies = new Physiotherapy[capacity];
		for (int i = 0; i < size; i++)
		{
			physiotherapies[i] = other.physiotherapies[i];
		}
	}
	return *this;
}
Schedule::Schedule(const Schedule& other){
	size = other.size;
	capacity = other.capacity;
	physiotherapies = new Physiotherapy[capacity];
	for (int i = 0; i < size; i++)
	{
		physiotherapies[i] = other.physiotherapies[i];
	}
}

void Schedule::printObjectsAndMaxObjects()const{
	


	myFile << endl;
	myFile << "Objects : " << this->size << endl;
	myFile << "Max objects : " << this->MAX_CAPACITY << endl;


}

void Schedule::printPhysiotherapy(int index)const{
	

	myFile << endl;
	myFile << "Physiotherapy " << index << endl;
	physiotherapies[index].printPhysiotherapy();
	myFile << endl;


}


void Schedule::getFreeHours()const{

	myFile << endl;
	myFile << "||| Time table |||" << endl;
	bool isFull = true;
	for (int i = 0; i < hours; i++)
	{
		if (freeHours[i] == false)
		{
			myFile << "Free hour: " << i + hours << ":00 " << endl;
			isFull = false;
		}
	}
	if (isFull == true)
	{
		myFile << "Schedule for today is full!!!" << endl;
		myFile << endl;
	}
	

}

void Schedule::setPhysiotherapy(int index, char* name, double price, int duration, int startTime){
	
	
	myFile << endl;
	myFile << "You changed physiotherapy!" << endl;
	physiotherapies[index].setName(name);
	physiotherapies[index].setPrice(price);
	physiotherapies[index].setDuration(duration);
	physiotherapies[index].setStartTime(startTime);

	
}

void Schedule::addPhysiotherapy(const Physiotherapy& newPhysio){
	
	
	if (size == capacity){
		capacity *= 2;
		Physiotherapy* old = physiotherapies;
		physiotherapies = new Physiotherapy[capacity];
		for (int i = 0; i < size; i++){
			physiotherapies[i] = old[i];
		}
		delete[] old;
	}

	if (freeHours[newPhysio.getStartTime() - hours] == false){
		for (int j = 1; j < newPhysio.getDuration(); j++)
		{
			if (freeHours[newPhysio.getStartTime() + j - hours] != false){
				myFile << endl << "Sorry, this hour is not free!" << newPhysio.getStartTime() << endl;
				throw invalid_argument("Sorry, this hour is not free!");
			}
			else{
				freeHours[newPhysio.getStartTime() - hours + j] = true;
			}
		}
	}
	else{
		myFile << endl << "Sorry, this hour is not free!  " << newPhysio.getStartTime() << endl;
		throw invalid_argument("Sorry, this hour is not free!");
	}
	freeHours[newPhysio.getStartTime() - hours] = true;
	physiotherapies[size++] = newPhysio;
	
}

int main(){

	myFile.open("Schedule.txt", ios::app);



	myFile << "Working hours: 9:00 - 18:00" << endl;
	Physiotherapy newPhysio0("Pesho", 10, 1, 9);
	Physiotherapy newPhysio1("Stamat", 10, 1, 10);
	Physiotherapy newPhysio2("Gosho", 10, 1, 11);
	Physiotherapy newPhysio3("Ivan", 10, 1, 12);
	Physiotherapy newPhysio4("Petkan", 10, 1, 13);
	Physiotherapy newPhysio5("Marian", 10, 1, 14);
	Physiotherapy newPhysio6("Mariika", 10, 1, 15);
	Physiotherapy newPhysio7("Ivanka", 10, 1, 16);
	Physiotherapy newPhysio8("Petran", 10, 1, 17);

	Schedule today;

	today.addPhysiotherapy(newPhysio0);
	today.addPhysiotherapy(newPhysio1);
	today.getFreeHours();
	today.addPhysiotherapy(newPhysio2);
	today.addPhysiotherapy(newPhysio3);
	today.addPhysiotherapy(newPhysio4);
	today.addPhysiotherapy(newPhysio5);
	today.addPhysiotherapy(newPhysio6);
	today.addPhysiotherapy(newPhysio7);
	today.addPhysiotherapy(newPhysio8);
	
	today.printObjectsAndMaxObjects();

	today.setPhysiotherapy(2, "Georgi", 10000, 1, 11);
	today.printPhysiotherapy(2);
	//today.getFreeHours();
	myFile.close();

}