#ifndef MusicSkill_H
#define MusicSkill_H

class MusicSkill{
private:
	char* instrument;
	int skill;
	void cpy(char*, int);
public:
	MusicSkill(char* = "", int = 0);
	~MusicSkill();
	MusicSkill& operator=(const MusicSkill&);
	MusicSkill(const MusicSkill&);
	int getSkill()const;
	char* getInstrument()const;
	void setSkill(int);
	void setInstrument(char*);
	void print()const;
};

#endif // !MusicSkill_H
