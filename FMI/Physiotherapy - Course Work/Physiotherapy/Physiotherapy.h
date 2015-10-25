#ifndef Physiotherapy_H 
#define Physiotherapy_H

class Physiotherapy{
private:
	char* name;
	double price;
	int duration;
	int startTime;
	void cpy(char*, double, int, int);
public:
	Physiotherapy(char* = "", double = 1.0, int = 1, int = 0);
	~Physiotherapy();
	Physiotherapy& operator=(const Physiotherapy&);
	Physiotherapy(const Physiotherapy&);

	void setName(char*);				// Correct name
	void setPrice(double);				// Correct price
	void setDuration(int);				// Correct duration
	void setStartTime(int);				// Correct start time
										
	char* getName()const;
	double getPrice()const;
	int getDuration()const;
	int getStartTime()const;
	

	void printPhysiotherapy()const;
};	
#endif // !
