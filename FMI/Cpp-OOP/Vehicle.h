/* Реализирайте следната йерахия от класове. Клас Превозно средство, което има следните характеристики:

производител - символен низ в динамичната памет;
регистрационен номер - символен низ, който се състои от две букви, четири цифри и отново две букви.
Класът се наследява от клас Автомобил и клас Велосипед. В класа Автомобил добавете следните характеристики:

модел - символен низ в динамичната памет;
максимална скорост.
Класа Велосипед има единствена собствена член-данна - брой скорости. 

За всеки от класовете, където е необходимо, реализирайте подходящи конструктори, мутатори и селектори, както и функция 
за извеждане. Проверете реализираната функционалност във всеки от класовете в кратка програма. */
#ifndef Vehicle_H
#define Vehicle_H

class Vehicle{
private:
	char* producer;
	char* number;
	void cpy(char*, char*);
public:
	Vehicle(char* = "", char* = "");
	~Vehicle();
	Vehicle& operator=(const Vehicle&);
	Vehicle(const Vehicle&);
	char* getProducer()const;
	char* getNumber()const;
	void setNumber(char*);
	void print()const;
};

class Car : public Vehicle{ 
private:
	char* model;
	int maxSpeed;
	void cpy(char*, int);
public:
	Car(char*, char*, char*, int);
	~Car();
	Car& operator=(const Car&);
	Car(const Car&);
	char* getModel()const;
	int getMaxSpeed()const;
	void setModel(char*);
	void setMaxSpeed(int);
	void print()const;
};

class Bicycle : public Vehicle{
private:
	char* model;
	int maxSpeed;
	int numberOfSpeed;
	void cpy(char*, int, int);
public:
	Bicycle(char*, char*, char*, int, int);
	~Bicycle();
	Bicycle(const Bicycle&);
	Bicycle& operator=(const Bicycle&);
	char* getModel()const;
	int getMaxSpeed()const;
	int getNumberOfSpeed()const;
	void setModel(char*);
	void setMaxSpeed(int);
	void setNumberOfSpeed(int);
	void print()const;
};

#endif // !Vehicle_H
