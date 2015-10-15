/*�� �� �������� ���� Team � ������ ���, ����� ��������� ���������
����� �� �����������, ���� ��� �������� ��������������:
�	addProgrammer - �������� �� ����������
�	removeProgrammer - ���������� �� ���������� �� �������o ���
�	getProgrammer � ����� ����������  �� �������o ���
�	print - ������� �� ������ ���������� �� ������ �����������
�	�� �� ����������� ��������  -=, ����� �������� �� ������������� ��
���m ���� �����������, ����� �� ������� � ��� ������ Team
�����: sort � �������  ������������� �� iq ��� �������� ���
*/
#ifndef Team_H
#define Team_H
#include "Programmer.h"

class Team{
private:
	char* name;
	Programmer* programmers;
	int size;
	int capacity;
public:
	Team(char* = "");
	~Team();
	Team& operator=(const Team&);
	Team(const Team&);

	void addProgrammer(const Programmer&);
	void removeProgrammer(const Programmer&);
	Programmer& getProgrammer(char*);
	void print()const;
	void sort();
	double avgIQ()const;
};

#endif // !Team_H
