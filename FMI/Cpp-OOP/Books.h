/*������ 2 
����������� ���������, ����� ������ ������� � ���������� � ��������������: ����� �� ���������� �����, ���, �������.
����������� ���������, ����� ������ ����� � ���������� � �������������� (���� �������):
����������� �����, ��������, �����, ���� � ����� ��� ��������.
��� ������� � �����, ���� �� ����������� ���������� �� ��������, �� ����� � �����.
����������� �������, �����:
�� ������� �������, ������ �������, ����� � ����;
�� �������� ��� �� �����, �� ������� ���� ��� �������� ����� �� ���;
������� ������� �� ������� ��� ������ ���������� �� ������� (��� ����� �� ������).*/

#ifndef Books_H
#define Books_H

struct Reader{
private:
	char* firstName;
	char* lastName;
	int number;
	void cpy(char*, char*, int);
public:
	Reader(char* = "", char* = "", int = 0);
	~Reader();
	Reader(const Reader&);
	Reader& operator=(const Reader&);
	char* getFirstName()const;
	char* getLastName()const;
	int getNumber()const;
	void print()const;
};

struct Book{
private:
	char* title;
	char* author;
	char* isFree;
	int libNumber;
	Reader taker;
	void cpy(char*, char*, char*, int);
public:
	Book(char* = "", char* = "", char* = "", int = 0);
	~Book();
	Book(const Book&);
	Book& operator=(const Book&);
	char* getTitle()const;
	char* getAuthor()const;
	char* getTaken()const;
	int getLibNumber()const;
	Reader getTaker();
	void print()const;
	void takeBook(Reader&);
	void isTaken();		
	void isntTaken();
};
#endif // !Books_H
