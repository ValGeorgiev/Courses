/*������ 2 
������������ � ��������� �� ����� � ��������� �� ��������.����������� �������� ��������������� :
�������� �� ��� �������(��� � ��������);
�������� �� ���� �����(��� � ��������);
��������� �� �����(�� ����������� �����);
������� � ������� �� �����.
����������� �������, �����:
�� ������� �������, ������ �������, ����� � ����;
�� �������� ��� �� �����, �� ������� ���� ��� �������� ����� �� ���;
������� ������� �� ������� ��� ������ ���������� �� �������(��� ����� �� ������).*/

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
