#ifndef Car_H
#define Car_H

class Car{
private:
	char* brand;
	char* registrationNumber;
	int year;
public:
	Car(char* = "", char* = "", int = 0);
	~Car();
	Car(const Car&);
	Car& operator=(const Car&);
	void print()const;
};

class People{
private:
	char* name;
	char* ucn;
public:
	People(char* = "", char* = "");
	~People();
	People(const People&);
	People& operator=(const People&);
	void print()const;
};
class CarPassport : public Car, public People{
public:
	CarPassport(char* = "", char* = "", int = 0, char* = "", char* = "");
	~CarPassport();
	CarPassport(const CarPassport&);
	CarPassport& operator=(const CarPassport&);
	void print()const;
};

#endif // !Car_H
