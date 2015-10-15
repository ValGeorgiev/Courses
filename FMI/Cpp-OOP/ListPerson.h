/*������ 2. ������� �� ����� ������� ��������� � ������ �� ��������� ��.
����������� � ���� ���������. �� �� �������� ���� ListPerson �� ������ �
��������� �� �������. ������ �� ������� ����� �� ������� �� ����. �� ��
���������� ������ �� �������� � ��������� �� �������, � ���� �� ������ ��
������� �� ������� �������. ��������� � ������ ������ �� �� ��������.
�� �� ���������� �������� �� ����������� �� ��� ���������, �� ��������
�� ��������� � �� ��������� �� ��� ���������. �� �� �������� �����, �����
�� �������� ������� ������ ������� �� ������. �� ����� � ����� �� �� ��������
� ����� �� ��������� Zodiac � ������: �������� �� ����� �� �������, ���� ��
�������� � ���� �� ���� ��..
*/

#ifndef ListPerson_H
#define ListPerson_H
#include "Card.h"

struct Zodiac{
private:
	char* name;
	int startDay;
	int startMonth;
	int finalDay;
	int finalMonth;
	void cpy(char*, int, int, int, int);
public:
	Zodiac(char* = "", int = 0, int = 0, int = 0, int = 0);
	~Zodiac();
	Zodiac& operator=(const Zodiac&);
	Zodiac(const Zodiac&);
	void setName(char*);
	void setStartDay(int);
	void setFinalDay(int);
	void setStartMonth(int);
	void setFinalMonth(int);
	void print()const;
	char* getName()const;
	int getStartDay()const;
	int getFinalDay()const;
	int getStartMonth()const;
	int getFinalMonth()const;
};

class ListPerson{
private:
	Card* cards;
	int size;
	int capacity;
	Zodiac* zodiacs;
	int zodiacsSize;
public:
	ListPerson();
	~ListPerson();
	ListPerson(const ListPerson&);
	ListPerson& operator=(const ListPerson&);
	void addCard(const Card&);
	void removeCard(char*);
	Card& getCard(char*);
};

#endif // !ListPerson_H
