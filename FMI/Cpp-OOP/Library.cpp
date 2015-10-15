#include <iostream>
#include <assert.h>
#include "Books.h"
#include "Library.h"
using namespace std;

void Library::print()const{
	cout << "Books: " << endl;
	for (int i = 0; i < numberOfBooks; i++){
		books[i].print();
		cout << endl;
	}
	cout << "Readers: " << endl;
	for (int i = 0; i < numberOfReaders; i++){
		readers[i].print();
		cout << endl;
	}
}
void Library::addReader(const Reader& other){
	if (numberOfReaders == maxReaders){
		maxReaders *= 2;
		Reader* old = readers;
		readers = new Reader[maxReaders];
		for (int i = 0; i < numberOfReaders; i++){
			readers[i] = old[i];
		}
		delete[]old;
	}
	readers[numberOfReaders++] = other;
}
void Library::addBook(const Book& other){
	if (numberOfBooks == maxBooks){
		maxBooks *= 2;
		Book* old = books;
		books = new Book[maxBooks];
		for (int i = 0; i < numberOfBooks; i++){
			books[i] = old[i];
		}
		delete[]old;
	}
	books[numberOfBooks++] = other;
}
void Library::returnBook(Book& book){
	delete[] book.getTaken();
	book.isntTaken();
}
void Library::removeBook(Book& book){
	bool isFound = false;
	for (int i = 0; i < numberOfBooks - 1; i++){
		if (!strcmp(books[i].getTitle(), book.getTitle())){
			isFound = true;
			for (int j = i + 1; j < numberOfBooks; j++){
				books[j - 1] = books[j];
			}
		}
	}
	if (!isFound){
		if (!strcmp(books[numberOfBooks - 1].getTitle(), book.getTitle())){
			--numberOfBooks;
			isFound = true;
		}
	}
	else{
		numberOfBooks--;
	}
}
Book& Library::findTaken(Reader& taker){
	for (int i = 0; i < numberOfBooks; i++){
		if (taker.getNumber() == books[i].getTaker().getNumber()){
			return books[i];
		}
	}
}
void Library::sortBooks(){
	int i, j, min;
	Book tmp;
	for (i = 0; i < numberOfBooks; i++){
		min = i;
		for (j = i + 1; j < numberOfBooks - 1; j++){
			if (strcmp(books[j].getTitle(), books[min].getTitle()) < 0){
				min = j;
			}
		}
		tmp = books[min];
		books[min] = books[i];
		books[i] = tmp;
	}
}
Library::Library(){
	books = new Book[1];
	readers = new Reader[1];
	numberOfBooks = 0;
	numberOfReaders = 0;
	maxBooks = 1;
	maxReaders = 1;
}
Library::~Library(){
	delete[]readers;
	delete[]books;
}
Library::Library(const Library& other){
	this->readers = new Reader[other.maxReaders];
	assert(this->readers != NULL);
	for (int i = 0; i < other.numberOfReaders; i++)
	{
		readers[i] = other.readers[i];
	}
	this->numberOfReaders = other.numberOfReaders;
	this->maxReaders = other.maxReaders;
	this->books = new Book[other.maxBooks];
	assert(this->books != NULL);
	for (int i = 0; i < other.numberOfBooks; i++)
	{
		books[i] = other.books[i];
	}
	this->numberOfBooks = other.numberOfBooks;
	this->maxBooks = other.maxBooks;
}
Library& Library::operator=(const Library& other){
	if (this != &other){
		delete[] readers;
		delete[] books;
		this->readers = new Reader[other.maxReaders];
		assert(this->readers != NULL);
		for (int i = 0; i < other.numberOfReaders; i++)
		{
			readers[i] = other.readers[i];
		}
		this->numberOfReaders = other.numberOfReaders;
		this->maxReaders = other.maxReaders;
		this->books = new Book[other.maxBooks];
		assert(this->books != NULL);
		for (int i = 0; i < other.numberOfBooks; i++)
		{
			books[i] = other.books[i];
		}
		this->numberOfBooks = other.numberOfBooks;
		this->maxBooks = other.maxBooks;
	}
	return *this;
}


int main(){

	return 0;
}

