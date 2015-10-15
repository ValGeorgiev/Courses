#include <iostream>
#include <cassert>
#include "Books.h"
using namespace std;

void Reader::cpy(char* _firstName, char* _lastName, int _number){
	size_t len = strlen(_firstName) + 1;
	firstName = new char[len];
	assert(firstName != NULL);
	strcpy_s(firstName, len, _firstName);
	size_t length = strlen(_lastName) + 1;
	lastName = new char[length];
	assert(lastName != NULL);
	strcpy_s(lastName, length, _lastName);
	number = _number;
}
Reader::Reader(char* _firstName, char* _lastName, int _number){
	cpy(_firstName, _lastName, _number);
}
Reader::~Reader(){
	delete[] firstName;
	delete[] lastName;
}
Reader::Reader(const Reader& other){
	cpy(other.firstName, other.lastName, other.number);
}
Reader& Reader::operator=(const Reader& other){
	if (this != &other){
		delete[] firstName;
		delete[] lastName;
		cpy(other.firstName, other.lastName, other.number);
	}
	return *this;
}
char* Reader::getFirstName()const{
	return firstName;
}
char* Reader::getLastName()const{
	return lastName;
}
int Reader::getNumber()const{
	return number;
}
void Reader::print()const{
	cout << "Reader name: " << firstName << " " << lastName << "  Number of reader card:  " << number << endl;
}

void Book::cpy(char* _title, char* _author, char* _isFree, int _libNumber){
	size_t len = strlen(_title) + 1;
	title = new char[len];
	assert(title != NULL);
	strcpy_s(title, len, _title);
	size_t length = strlen(_author) + 1;
	author = new char[length];
	assert(author != NULL);
	strcpy_s(author, length, _author);
	size_t lgth = strlen(_isFree) + 1;
	isFree = new char[lgth];
	assert(isFree != NULL);
	strcpy_s(isFree, lgth, _isFree);
	libNumber = _libNumber;
}
Book::Book(char* _title, char* _author, char* _isFree, int _libNumber){
	cpy(_title, _author, _isFree, _libNumber);
}
Book::~Book(){
	delete[] title;
	delete[] author;
	delete[] isFree;

}
Book::Book(const Book& other){
	cpy(other.title, other.author, other.isFree, other.libNumber);
}
Book& Book::operator=(const Book& other){
	if (this != &other){
		delete[] title;
		delete[] author;
		delete[] isFree;
		cpy(other.title, other.author, other.isFree, other.libNumber);
	}
	return *this;
}
char* Book::getTitle()const{
	return title;
}
char* Book::getAuthor()const{
	return author;
}
int Book::getLibNumber()const{
	return libNumber;
}
char* Book::getTaken()const{
	return isFree;
}
Reader Book::getTaker(){
	if (isFree){
		return taker;
	}
}
void Book::print()const{
	cout << "Title: " << title << " author: " << author << " is free: " << isFree << endl;
}
void Book::isTaken(){
	delete[] isFree;
	isFree = new char[4];
	strcpy_s(isFree, 4, "yes");
}
void Book::isntTaken(){
	delete[] isFree;
	isFree = new char[3];
	strcpy_s(isFree, 3, "no");
}
void Book::takeBook(Reader& reader){
	if (!strcmp(isFree, "no")){
		this->taker = reader;
		isTaken();
	}
}

//int main(){
//	Reader ivan("Ivan", "Ivanov", 10);
//	Book book("dnes", "Ivan Petkanov", "no", 11);
//	book.print();
//	ivan.print();
//	book.takeBook(ivan);
//	book.print();
//
//	return 0;
//}