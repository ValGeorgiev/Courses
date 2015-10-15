/*Да се дефинира клас Team с дадено име, който съхранява динамичен
масив от програмисти, като има следната функционалност:
•	addProgrammer - добавяне на програмист
•	removeProgrammer - премахване на програмист по зададенo име
•	getProgrammer – връща програмист  по зададенo име
•	print - извежда на екрана информация за всички програмисти
•	да се предефинира оператор  -=, който премахва от подразбиращия се
Теаm тези програмисти, които се намират и във втория Team
Бонус: sort – сортира  програмистите по iq във възходящ ред
*/
#ifndef Team_H
#define Team_H
#include "Programmer.h"

class Team{
private:
	char* name;
	Programmer* programmers;
	int size;
	int capacity;
public:
	Team(char* = "");
	~Team();
	Team& operator=(const Team&);
	Team(const Team&);

	void addProgrammer(const Programmer&);
	void removeProgrammer(const Programmer&);
	Programmer& getProgrammer(char*);
	void print()const;
	void sort();
	double avgIQ()const;
};

#endif // !Team_H
