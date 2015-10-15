#ifndef Worker_H
#define Worker_H

class Worker{
private:
	char* name;
	double salaryPerHour;
public:
	Worker(const char* = "", double = 0.0);
	Worker(const Worker&);
	~Worker();
	Worker& operator=(const Worker&);
	void print()const;
	double getSalary()const;
};

class HourlyWorker : public Worker{
private:
	char* kindOfWork;
	int hours;
public:
	HourlyWorker(const char* = "", double = 0.0, const char* = "", int = 0);
	HourlyWorker(const HourlyWorker&);
	~HourlyWorker();
	HourlyWorker& operator=(const HourlyWorker&);
	double weekSalary()const;
	void print() const;
};

class SalariedWorker : public Worker{
private:
	char* kindOfWork;
	int hours;
public:
	SalariedWorker(const char* = "", double = 0.0, const char* = "", int = 0);
	SalariedWorker(const SalariedWorker&);
	~SalariedWorker();
	SalariedWorker& operator=(const SalariedWorker&);
	void print()const;
	double weekSalary()const;
};
#endif // !Worker_H
