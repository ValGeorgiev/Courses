#ifndef Manager_H
#define Manager_H

class Manager{
private:
	char* name;
	int internship;
	int people;
	double salary;
	void cpy(char*, int, int, double);
public:
	Manager(char* = "", int = 0, int = 0, double = 0.0);
	~Manager();
	Manager(const Manager&);
	Manager& operator=(const Manager&);

	char* getName()const;
	int getInternship()const;
	int getPeople()const;
	double getSalary()const;
	void setName(char*);
	void setInternship(int);
	void setPeople(int);
	void setSalary(double);
	void print()const;
};

#endif