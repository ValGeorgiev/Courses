#include <iostream>
#include "Classes.h"
#include <assert.h>
using namespace std;

//void Employee::read(){
//	cout << "First name: ";
//	cin >> name.first;
//	cout << "Second name: ";
//	cin >> name.last;
//	cout << "Hours: ";
//	cin >> work.hours;
//	cout << "Salary: ";
//	cin >> work.salary;
//}
//void Employee::print()const{
//	cout << "Name: " << name.first << " " << name.last << "Salary: " << work.hours * work.salary << endl;
//}
//
//int main(){
//	Employee me;
//	me.read();
//	me.print();
//	return 0;
//}    

//Fact::Fact(int x){
//	a = x;
//}
//void Fact::factorial(){
//	int result = 1;
//	for (int i = a; i > 1; i--){
//		result *= i;
//	}
//	cout << "factorial of " << a << " is: " << result << endl;
//}
//int main(){
//	Fact five(5);
//	five.factorial();
//	return 0;
//}

//BankAccount::BankAccount(const char* name, const char* amount, double balance){
//	strncpy_s(this->name, name, 23);
//	this->name[23] = '\0';
//	strncpy_s(this->amount, amount, 15);
//	this->amount[15] = '\0';
//	this->balance = balance;
//}
//void BankAccount::print()const{
//	cout << "Name " << this->name << " Amount: " << this->amount << " Balance: " << this->balance << endl;
//}
//void BankAccount::putIn(double money){
//	if (money >= 0){
//		this->balance += money;
//	}
//	else{
//		cout << "Wrong input!!!" << endl;
//	}
//}
//void BankAccount::draw(double money){
//	if (money < 0){
//		cout << "Wrong input!!!" << endl;
//	}
//	else{
//		if (money <= this->balance){
//			this->balance -= money;
//		}
//		else{
//			cout << "No enough money in the card!!!" << endl;
//		}
//	}
//}
//int main(){
//	BankAccount newCard("Valentin", "12345", 100);
//	newCard.print();
//	newCard.putIn(150);
//	newCard.print();
//	newCard.draw(200);
//	newCard.print();
//	return 0;
//}

//P::P(int x, double y){
//	a = x;
//	b = y;
//}
//P::~P(){
//	cout << "~P()" << endl;
//}
//void P::display()const{
//	cout << a << " " << b << endl;
//}
//int main(){
//	P *p;
//	p = new P[5];
//	if (!p){
//		cout << "Error" << endl;
//		return -1;
//	}
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		p[i].display();
//	}
//	delete[] p;
//	return 0;
//}

//BankAccount::BankAccount(char* _name, char* _bankNumber, double _balance){
//	size_t len = strlen(_name) + 1;
//	this->name = new char[len];
//	assert(this->name != NULL);
//	strcpy_s(this->name, len, _name);
//	size_t length = strlen(_bankNumber) + 1;
//	this->bankNumber = new char[length];
//	assert(this->bankNumber != NULL);
//	strcpy_s(this->bankNumber, length, _bankNumber);
//	this->balance = _balance;
//}
//BankAccount::~BankAccount(){
//	delete this->name;
//	delete this->bankNumber;
//}
//BankAccount& BankAccount::operator=(const BankAccount& r){
//	if (this != &r){
//		delete[] name;
//		delete[] bankNumber;
//		size_t len = strlen(r.name) + 1;
//		this->name = new char[len];
//		assert(this->name != NULL);
//		strcpy_s(this->name, len, r.name);
//		size_t length = strlen(r.bankNumber) + 1;
//		this->bankNumber = new char[length];
//		assert(this->bankNumber != NULL);
//		strcpy_s(this->bankNumber, length, r.bankNumber);
//		this->balance = r.balance;
//	}
//	return *this;
//}
//BankAccount::BankAccount(const BankAccount& r){
//	size_t len = strlen(r.name) + 1;
//	this->name = new char[len];
//	assert(this->name != NULL);
//	strcpy_s(this->name, len, r.name);
//	size_t length = strlen(r.bankNumber) + 1;
//	this->bankNumber = new char[length];
//	assert(this->bankNumber != NULL);
//	strcpy_s(this->bankNumber, length, r.bankNumber);
//	this->balance = r.balance;
//}
//void BankAccount::print()const{
//	cout << "name: " << this->name << " bank number: " << this->bankNumber << " balance:  " << this->balance << endl;
//}
//void BankAccount::putIn(double x){
//	this->balance += x;
//}
//void BankAccount::draw(double x){
//	if (this->balance > x){
//		this->balance -= x;
//	}
//	else{
//		cout << "Not enough money!" << endl;
//	}
//}
//int main(){
//	BankAccount mine("Valentin", "1234", 100.2);
//	BankAccount yours("ivan", "4321", 12.5);
//	mine.print();
//	yours.print();
//	mine.putIn(200);
//	yours.draw(12);
//	mine.print();
//	yours.print();
//	return 0;
//}

//void Time::simplify(){
//	if (minutes >= 60){
//		hours += minutes / 60;
//		minutes = minutes % 60;
//	}
//}
//Time::Time(){
//	hours = minutes = 0;
//}
//Time::Time(int _hours, int _minutes){
//	reset(_hours, _minutes);
//}
//Time::Time(Time const& r){
//	hours = r.hours;
//	minutes = r.minutes;
//}
//void Time::reset(int h, int m){
//	hours = h;
//	minutes = m;
//	simplify();
//}
//void Time::addMin(int m){
//	minutes += m;
//	simplify();
//}
//void Time::addHours(int h){
//	hours += h;
//}
//void Time::print()const{
//	cout << hours << " : " << minutes << endl;
//}
//Time::operator int()const{
//	return hours * 60 + minutes;
//}
//Time Time::operator+(const Time& t)const{
//	Time new_t;
//	new_t.minutes = minutes + t.minutes;
//	new_t.hours = hours + t.hours;
//	new_t.simplify();
//	return new_t;
//}
//Time Time::operator-(const Time& t)const{
//	Time new_t;
//	int m1, m2;
//	m1 = t.hours * 60 + t.minutes;
//	m2 = hours * 60 + minutes;
//	new_t.minutes = (m2 - m1) % 60;
//	new_t.hours = (m2 - m1) / 60;
//	return new_t;
//}
//Time Time::operator*(int mult)const{
//	Time new_t;
//	int m = (hours * 60 + minutes)* mult;
//	new_t.hours = m / 60;
//	new_t.minutes = m % 60;
//	return new_t;
//}
//int main(){
//	Time t1, t2(12);
//	t1.print();
//	t2.print();
//	t1.addMin(105);
//	t1.print();
//	return 0;
//}

//double Budget::universityBudget = 0;
//Budget::Budget(double _facultyBudget){
//	this->facultyBudget = _facultyBudget;
//}
//double Budget::getFacultyBudget()const{
//	return this->facultyBudget;
//}
//double Budget::getUniversityBudget()const{
//	return universityBudget;
//}
//void Budget::addBudget(double budget){
//	facultyBudget = budget;
//	universityBudget += facultyBudget;
//}
//int main(){
//	const int numFaculty = 10;
//	int i;
//	double budgetAmount;
//	Budget faculties[numFaculty];
//	for (i= 0; i < numFaculty; i++){
//		cout << "Add budget on " << i + 1 << " faculty: ";
//		cin >> budgetAmount;
//		faculties[i].addBudget(budgetAmount);
//	}
//	for (i = 0; i < numFaculty; i++){
//		cout << "Faculty " << i + 1 << ": ";
//		cout << faculties[i].getFacultyBudget() << endl;
//	}
//	cout << "Budget of university: " << faculties[0].getUniversityBudget() << endl;
//	return 0;
//}

//LibraryCard::LibraryCard(char* _titleOfBook, char* _authorName, int _books){
	//	size_t len = strlen(_titleOfBook) + 1;
	//	this->titleOfBook = new char[len];
	//	assert(this->titleOfBook != NULL);
	//	strcpy_s(this->titleOfBook, len, _titleOfBook);
	//	size_t length = strlen(_authorName) + 1;
	//	this->authorName = new char[length];
	//	assert(this->authorName != NULL);
	//	strcpy_s(this->authorName, length, _authorName);
	//	this->books = books;
	//}
	//void LibraryCard::print()const{
	//	cout << "Title of book: " << this->titleOfBook << " Author name: " << this->authorName << " Books: " << this->books << endl;
	//}
	//int main(){
	//	LibraryCard mine("Henzel i gretel", "Pesho", 10);
	//	mine.print();
	//	return 0;
	//}

//Monotone::Monotone(){
//	for (int i = 0; i < 10; i++){
//		cout << "arr[" << i << "]= ";
//		cin >> arr[i];
//	}
//}
//bool Monotone::isMon(){
//	isMonotone = true;
//	for (int i = 1; i < 10; i++){
//		if (arr[i - 1] > arr[i]){
//			isMonotone = false;
//			return isMonotone;
//		}
//	}
//	return isMonotone;
//}
//int main(){
//	Monotone arr;
//	cout << "Is monotone: " << arr.isMon() << endl;
//	return 0;
//}

//void speedGreater(const Car& car, const Bus& bus){
//	if (car.getSpeed() > bus.getSpeed()){
//		cout << "The car is faster than a bus!" << endl;
//	}
//	else if(car.getSpeed() < bus.getSpeed()){
//		cout << "The bus is faster than a car!" << endl;
//	}
//	else{
//		cout << "The speed of car and bus is equal!" << endl;
//	}
//}
//Car::Car(double _speed){
//	speed = _speed;
//}
//double Car::getSpeed()const{
//	return this->speed;
//}
//Bus::Bus(double _speed){
//	speed = _speed;
//}
//double Bus::getSpeed()const{
//	return this->speed;
//}
//int main(){
//	Car audi(120);
//	Bus mercedes(100);
//	speedGreater(audi, mercedes);
//
//	Car lada(12);
//	Bus lambo(4000);
//	speedGreater(lada, lambo);
//
//	return 0;
//}

