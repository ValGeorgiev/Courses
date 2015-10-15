#ifndef Device_H
#define Device_H

class Device{
private:
	char* maker;
	double price;
	void cpy(char*, double);
public:
	Device(char* = "", double = 0.0);
	virtual ~Device();
	Device(const Device&);
	Device& operator=(const Device&);
	virtual double getRating()const = 0;
	void printOwn()const;
	void setMaker(char*);
	void setPrice(double);
	char* getMaker()const;
	double getPrice()const;
	virtual void print() = 0;
};


#endif // !Device_H
