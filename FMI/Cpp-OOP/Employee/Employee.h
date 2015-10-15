/*� ��������� ����� ��� ��� ���� ��������� - ����������� � ���������. ����� "����� ������" �������� �������� ���������� �� 
����� �� �������������:
-���
-����(� ������)
-�������
-���� ���� �++
-���� ���� �#
� �������� ���������� �� ����� �� �����������:
-���
-����(� ������)
-�������
-����� ������ ���������
�� �� ������ ��������, ����� ��������� �� ����� ����� ������ �� �������� ������ � ������ �����������
� ��������� ��� �������. ���������� �� ���� �� �������� �������� ��������:
-���������� �� ��� ��������
-��������� �� ��������
-�������� �� �������� ������ �� ������� �� ������� ��������������
-�������� �� ��������� �� ����������� �� ��������� ��������
-��������� �� ������ � ����� �� ������ ���������
�� ��  ������� �������� ����� �� ��������� � ��������� ����� � ��� ��� �� �� �������� �������� ��������:
-��������� �� ������ ���������, ����� ���� ���� ��-����� �� 3 ������
-����������� �� ��������� �� ������ �����������, ����� ����� �# ��� 100 ����
-����������� �� ��������� �� ������ �����������, ����� ����� �++ � 500 ����(� ������, �� ����������� ���� � �����
�����, ������������� � � 500 ����);
-��������� �� ����� �� ����������� �� �������
-��������� �� �������� ������ �� �������.*/

#ifndef Employee_H
#define Employee_H
#include "Developer.h"
#include "Manager.h" 

class Employee{
private:
	Manager* managers;
	int sizeManagers;
	int capacityManagers;
	Developer* developers;
	int sizeDevelopers;
	int capacityDevelopers;
public:
	Employee();
	~Employee();
	Employee(const Employee&);
	Employee& operator=(const Employee&);

	void addDeveloper(const Developer&);
	void addManager(const Manager&);
	void removeManager(char*);
	void removeDeveloper(char*);
	double monthCost();
	void correctSalaryManager(int, Manager&);
	void correctSalaryDeveloper(int, Developer&);
	void print()const;
};

#endif // !Employee_H
