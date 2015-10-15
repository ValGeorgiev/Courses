/*Задача 2. Визитка на човек съдържа фамилията и датата на раждането му.
Реализирана е чрез структура. Да се дефинира клас ListPerson за работа с
картотека от визитки. Класът да съдържа масив от визитки на хора. Да се
реализират методи за добавяне и изтриване на визитка, а също за достъп до
визитка по указана фамилия. Фамилиите в масива трябва да са уникални.
Да се реализират операции за обединяване на две картотеки, за намиране
на сечението и на разликата на две картотеки. Да се дефинира метод, който
по зададена фамилия намира зодията на човека. За целта в класа да се дефинира
и масив от структури Zodiac с полета: название на знака на зодиака, дата на
началото и дата на края му.
*/
#ifndef Card_H
#define Card_H

struct Card{
private:
	char* lastName;
	int day;
	int month;
	int year;
	void cpy(char*, int, int, int);
public:
	Card(char* = "", int = 0, int = 0, int = 0);
	~Card();
	Card& operator=(const Card&);
	Card(const Card&);
	void setLastName(char*);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	char* getLastName()const;
	int getDay()const;
	int getMonth()const;
	int getYear()const;
	void print()const;
};

#endif // !Card_H
