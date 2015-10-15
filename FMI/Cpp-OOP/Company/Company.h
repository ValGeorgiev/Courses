#ifndef Company_H
#define Company_H
#include "Programmer.h"
#include "Team.h"

class Company{
private:
	Team* teams;
	int size;
	int capacity;
public:
	Company();
	~Company();
	Company& operator=(const Company&);
	Company(const Company&);
	void print()const;
	double averageIQ()const;
};

#endif // !Company_H
