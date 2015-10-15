#ifndef ShopDevice_H
#define ShopDevice_H
#include "Device.h"

class ShopDevice{
private:
	Device** devices;
	int size;
	int capacity;
public:
	ShopDevice();
	~ShopDevice();
	ShopDevice& operator=(const ShopDevice&);
	ShopDevice(const ShopDevice&);
	double getAllRatings()const;
	void print()const;
	void addDevice(Device*);
	void removeDevice(char*);
};


#endif