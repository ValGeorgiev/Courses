#include<iostream>
#include "Schedule.h"

using namespace std;


Schedule::Schedule(){
	size = 0;
	capacity = 1;
	physiotherapies = new Physiotherapy[capacity];
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
	cout << "Objects : " << this->size << endl;
	cout << "Max objects : " << this->MAX_CAPACITY << endl;
}

void Schedule::printPhysiotherapy(int index)const{
	cout << "Physiotherapy " << index << endl;
	physiotherapies[index].printPhysiotherapy();
	cout << endl;
}


//void Schedule::getFreeHours()const{
//	for (int i = 9; i < 19; i++)
//	{
//		if (i )
//	}
//}

void Schedule::setPhysiotherapy(int index, char* name, double price, int duration, int startTime){
	cout << "You changed physiotherapy!" << endl;
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
	physiotherapies[size++] = newPhysio;
}

int main(){
	cout << "Working hours: 9:00 - 18:00" << endl;
	Physiotherapy newPhysio0("Pesho", 10, 1, 9);
	Physiotherapy newPhysio1("Gosho", 10, 1, 10);
	Physiotherapy newPhysio2("Stamat", 10, 1, 11);
	Physiotherapy newPhysio3("Ivan", 10, 1, 12);
	Physiotherapy newPhysio4("Kotanges", 10, 1, 13);
	Physiotherapy newPhysio5("Tanges", 10, 1, 14);
	Physiotherapy newPhysio6("Mariika", 10, 1, 15);
	Physiotherapy newPhysio7("Ivanka", 10, 1, 16);
	Physiotherapy newPhysio8("Petran", 10, 1, 17);

	Schedule today;
	today.addPhysiotherapy(newPhysio0);
	today.addPhysiotherapy(newPhysio1);
	today.addPhysiotherapy(newPhysio2);
	today.addPhysiotherapy(newPhysio3);
	today.addPhysiotherapy(newPhysio4);
	today.addPhysiotherapy(newPhysio5);
	today.addPhysiotherapy(newPhysio6);
	today.addPhysiotherapy(newPhysio7);
	today.addPhysiotherapy(newPhysio8);
	
	today.setPhysiotherapy(0, "Change", 15, 2, 11);
	today.printPhysiotherapy(0);
	cout << endl;
	today.printObjectsAndMaxObjects();
}