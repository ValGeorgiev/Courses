#ifndef Classes_H
#define Classes_H

//class Employee{
//public:
//	void read();
//	void print()const;
//private:
//	struct{
//		char first[16];
//		char last[16];
//	} name;
//	struct{
//		double hours;
//		double salary;
//	} work;
//};

//class Fact{
//private:
//	int a;
//public:
//	Fact(int = 0);
//	void factorial();
//};

//class BankAccount{
//private:
//	char name[24];
//	char amount[16];
//	double balance;
//public:
//	BankAccount(const char* = "", const char* = "", double = 0.0);
//	void print()const;
//	void putIn(double);
//	void draw(double);
//};

//class P{
//private:
//	int a;
//	double b;
//public:
//	P(int = 5, double = 2.5);
//	~P();
//	void display() const;
//};

//class BankAccount{
//private:
//	char* name;
//	char* bankNumber;
//	double balance;
//public:
//	BankAccount(char* = "", char* = "", double = 0.0);
//	~BankAccount();
//	BankAccount& operator=(const BankAccount&);
//	BankAccount(const BankAccount&);
//	void print()const;
//	void putIn(double);
//	void draw(double);
//};

//class Time{
//private:
//	int hours,
//		minutes;
//	void simplify();
//public:
//	Time();
//	Time(int, int = 0);
//	Time(Time const&);
//	void reset(int = 0, int = 0);
//	void addMin(int);
//	void addHours(int);
//	operator int() const;
//	void print() const;
//	Time operator+(const Time &) const;
//	Time operator-(const Time &) const;
//	Time operator*(int)const;
//};

//class Budget{
//private:
//	static double universityBudget;
//	double facultyBudget;
//public:
//	Budget(double = 0.0);
//	double getFacultyBudget()const;
//	double getUniversityBudget()const;
//	void addBudget(double);
//};

//class LibraryCard{
//private:
//	char* titleOfBook;
//	char* authorName;
//	int books;
//public:
//	LibraryCard(char* = "", char* = "", int = 0);
//	void print()const;
//};

//class Monotone{
//private:
//	int arr[10];
//	bool isMonotone;
//public:
//	Monotone();
//	bool isMon();
//};

//class Car{
//private:
//	double speed;
//public:
//	Car(double = 0);
//	double getSpeed()const;
//};
//class Bus{
//private:
//	double speed;
//public:
//	Bus(double = 0);
//	double getSpeed()const;
//	friend void speedGreater(Car const&, Bus const &);
//};



#endif