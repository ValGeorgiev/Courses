#ifndef Programmer_H
#define Programmer_H

class Programmer{
private:
	char* name;
	int iq;
	double salary;
	void cpy(char*, int, double);
public:
	Programmer(char* = "", int = 0, double = 0.0);
	~Programmer();
	Programmer(const Programmer&);
	Programmer& operator=(const Programmer&);
	
	bool operator>(const Programmer&)const;
	bool operator<(const Programmer&)const;
	bool operator==(const Programmer&)const;

	void setName(char*);
	void setIq(int);
	void setSalary(double);
	char* getName()const;
	int getIq()const;
	double getSalary()const;
	void print()const;
};

#endif // !Programmer_H
