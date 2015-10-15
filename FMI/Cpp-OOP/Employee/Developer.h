#ifndef Developer_H
#define Developer_H


class Developer{
private:
	char* name;
	int internship;
	double salary;
	bool cplusplus;
	bool csharp;
	void cpy(char*, int, double, bool, bool);
public:
	Developer(char* = "", int = 0, double = 0.0, bool = false, bool = false);
	~Developer();
	Developer(const Developer&);
	Developer& operator=(const Developer&);

	char* getName()const;
	int getInternship()const;
	double getSalary()const;
	bool getCPlusPlus()const;
	bool getCSharp()const;
	void setName(char*);
	void setInternship(int);
	void setSalary(double);
	void setCPlusPlus(bool);
	void setCSharp(bool);
	void print()const;
};

#endif