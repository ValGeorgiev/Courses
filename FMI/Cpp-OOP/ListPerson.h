/*Задача 2. Визитка на човек съдържа фамилията и датата на раждането му.
Реализирана е чрез структура. Да се дефинира клас ListPerson за работа с
картотека от визитки. Класът да съдържа масив от визитки на хора. Да се
реализират методи за добавяне и изтриване на визитка, а също за достъп до
визитка по указана фамилия. Фамилиите в масива трябва да са уникални.
Да се реализират операции за обединяване на две картотеки, за намиране
на сечението и на разликата на две картотеки. Да се дефинира метод, който
по зададена фамилия намира зодията на човека. За целта в класа да се дефинира
и масив от структури Zodiac с полета: название на знака на зодиака, дата на
началото и дата на края му..
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
