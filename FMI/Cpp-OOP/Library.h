/*Задача 2 
Библиотеката е множество от книги и множество от читатели.Дефинирайте следните функционалности :
добавяне на нов читател(ако е възможно);
добавяне на нова книга(ако е възможно);
бракуване на книга(по библиотечен номер);
заемане и връщане на книга.
Дефинирайте функция, която:
по подаден читател, намира книгата, която е заел;
по подадено име на книга, да провери дали има свободно копие от нея;
сортира книгите по азбучен ред според заглавието на книгита(или името на автора).*/

#ifndef Library_H
#define Library_H
#include "Books.h"

class Library{
private:
	Reader* readers;
	Book* books;
	int maxBooks;
	int numberOfBooks;
	int maxReaders;
	int numberOfReaders;
public:
	Library();
	~Library();
	Library(const Library&);
	Library& operator=(const Library&);
	
	void addReader(const Reader&);
	void addBook(const Book&);
	void returnBook(Book&);
	void removeBook(Book&);
	Book& findTaken(Reader&);
	void sortBooks();
	void print()const;
};

#endif // !Library_H
