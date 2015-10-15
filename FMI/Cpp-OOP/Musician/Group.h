#ifndef Group_H
#define Group_H
#include "MusicSkill.h"
#include "Musician.h"

class Group{
protected:
	char* name;
	Musician* members[10];
	int memberCount;
	void cpy(char*, int = 0, Musician** const = NULL);
public:
	virtual double getValue() = 0;
	virtual void addMusician(Musician&);
	void removeMusician(char*);
	char* getName()const;
	void setName(char*);
	double getAverageBeauty();
	Group(char*);
	virtual ~Group();
	Group(const Group&);
	Group& operator=(const Group&);
	virtual void print()const;
};

class RockGroup : virtual public Group{
public:
	virtual void addMusician(Musician&);
	virtual double getValue();
	RockGroup(char* = ""); 
	RockGroup(const RockGroup&);
	RockGroup& operator=(const RockGroup&);
};

class FolkGroup : virtual public Group{
public:
	virtual void addMusician(Musician&);
	virtual double getValue();
	FolkGroup(char* = "");
	FolkGroup(const FolkGroup&);
	FolkGroup& operator=(const FolkGroup&);
};

class FolkRockGroup : public RockGroup, public FolkGroup {
public:
	virtual void addMusician(Musician&);
	virtual double getValue();

	FolkRockGroup(char* = "");
	FolkRockGroup(const FolkRockGroup&);
	FolkRockGroup& operator=(const FolkRockGroup&);
};

#endif // !Group_H
