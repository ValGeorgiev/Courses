/*������ 2. ������� �� ����� ������� ��������� � ������ �� ��������� ��.
����������� � ���� ���������. �� �� �������� ���� ListPerson �� ������ �
��������� �� �������. ������ �� ������� ����� �� ������� �� ����. �� ��
���������� ������ �� �������� � ��������� �� �������, � ���� �� ������ ��
������� �� ������� �������. ��������� � ������ ������ �� �� ��������.
�� �� ���������� �������� �� ����������� �� ��� ���������, �� ��������
�� ��������� � �� ��������� �� ��� ���������. �� �� �������� �����, �����
�� �������� ������� ������ ������� �� ������. �� ����� � ����� �� �� ��������
� ����� �� ��������� Zodiac � ������: �������� �� ����� �� �������, ���� ��
�������� � ���� �� ���� ��.
*/
#ifndef Card_H
#define Card_H

struct Card{
private:
	char* lastName;
	int day;
	int month;
	int year;
	void cpy(char*, int, int, int);
public:
	Card(char* = "", int = 0, int = 0, int = 0);
	~Card();
	Card& operator=(const Card&);
	Card(const Card&);
	void setLastName(char*);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	char* getLastName()const;
	int getDay()const;
	int getMonth()const;
	int getYear()const;
	void print()const;
};

#endif // !Card_H
