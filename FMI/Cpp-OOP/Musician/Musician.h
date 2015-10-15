#ifndef Musician_H
#define Musician_H
#include "MusicSkill.h"

class Musician{
protected:
	char* name;
	int beauty;
	int sins;
	MusicSkill skills[5];
	int skillsCount;
	void cpy(char*, int, int, int = 0, const MusicSkill* = NULL);
public:
	Musician(char* = "", int = 0, int = 0);
	Musician(const Musician&);
	virtual ~Musician();
	Musician& operator=(const Musician&);
	
	virtual double getBeauty() = 0;
	virtual char* getType() = 0;
	virtual void print();
	void addSkill(MusicSkill&);
	void sortSkill();
	int getMinSkill();
	int getMaxSkill();
	int sumAllSkill();
	int getSins()const;
	char* getName()const;
	void setName(char*);

};

class RockStar :public Musician{
public:
	virtual char* getType();
	virtual void print();
	virtual double getBeauty();
	RockStar(char*, int, int);
	RockStar(const RockStar&);
	RockStar& operator=(const RockStar&);
};

class FolkStar :public Musician{
private:
	bool race;
public:
	virtual char* getType();
	virtual double getBeauty();
	virtual void print();
	FolkStar(char*, int, int, bool = false);
	FolkStar(const FolkStar&);
	FolkStar& operator=(const FolkStar&);
};

#endif