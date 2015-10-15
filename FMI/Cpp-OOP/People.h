#ifndef People_H
#define People_H

class People{
private:
	char* name;
	char* ucn;
public:
	People(char* = "", char* = "");
	~People();
	void printPeople()const;
};

class Student : public People{
private:
	long facNumber;
	double gpa;
public:
	Student(char* = "", char* = "", long = 0, double = 0.0);
	~Student();
	void printStudent()const;
};

class PStudent : public Student{
private:
	double fee;
public:
	PStudent(char* = "", char* = "", long = 0, double = 0.0, double = 0.0);
	~PStudent();
	void printPStudent()const;
};


#endif
