/*В софтуерна фирма има два вида служители - програмисти и мениджъри. Отдел "личен състав" поддържа следната информация за 
всеки от програмистите:
-име
-стаж(в месеци)
-заплата
-дали знае С++
-дали знае С#
и следната информация за всеки от мениджърите:
-име
-стаж(в месеци)
-заплата
-колко човека управлява
Да се напише програма, която позволява на отдел личен състав да поддържа списък с всички програмисти
и мениджъри във фирмата. Програмата да може да извържва следните операции:
-постъпване на нов служител
-напускане на служител
-намиране на месечния разход на фирмата за трудови възнаграждения
-корекция на заплатите на служителите по определен критерии
-извеждане на списък с данни за всички служители
Да се  въведаъ примерни данни за служители в софтуерна фирма и над тях да се изпълнят следните операции:
-изтриване на всички служители, които имат стаж по-малко от 3 месеца
-увеличаване на заплатите на всички програмисти, които знаят С# със 100 лева
-увеличаване на заплатите на всички програмисти, които знаят С++ с 500 лева(в случай, че програмиста знае и двата
езика, увеличаването е с 500 лева);
-извеждане на данни за служителите на фирмата
-извеждане на месечния разход за заплати.*/

#ifndef Employee_H
#define Employee_H
#include "Developer.h"
#include "Manager.h" 

class Employee{
private:
	Manager* managers;
	int sizeManagers;
	int capacityManagers;
	Developer* developers;
	int sizeDevelopers;
	int capacityDevelopers;
public:
	Employee();
	~Employee();
	Employee(const Employee&);
	Employee& operator=(const Employee&);

	void addDeveloper(const Developer&);
	void addManager(const Manager&);
	void removeManager(char*);
	void removeDeveloper(char*);
	double monthCost();
	void correctSalaryManager(int, Manager&);
	void correctSalaryDeveloper(int, Developer&);
	void print()const;
};

#endif // !Employee_H
