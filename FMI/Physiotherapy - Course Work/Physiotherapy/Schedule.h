#ifndef Schedule_H
#define Schedule_H

#include "Physiotherapy.h"

class Schedule{
private:
	Physiotherapy* physiotherapies;
	int size;
	int capacity;
	static const int MAX_CAPACITY = 200;
	static const int hours = 9;
	bool freeHours[9];
public:
	Schedule();
	~Schedule();
	Schedule& operator=(const Schedule&);
	Schedule(const Schedule&);

	void printObjectsAndMaxObjects()const;
	void printPhysiotherapy(int)const;
	void getFreeHours()const;

	void addPhysiotherapy(const Physiotherapy&);
	
	void setPhysiotherapy(int, char*, double, int, int);
};

#endif // !Schedule_H
