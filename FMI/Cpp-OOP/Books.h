/*Задача 2 
Дефинирайте структура, която описва читател в библиотека с характеристики: номер на читателска карта, име, фамилия.
Дефинирайте структура, която описва книга в библиотека с характеристики (като минимум):
библиотечен номер, заглавие, автор, дали е заета или свободна.
Ако книгата е заета, може да съхранявате информация за читателя, на който е заета.
Дефинирайте функция, която:
по подаден читател, намира книгата, която е заел;
по подадено име на книга, да провери дали има свободно копие от нея;
сортира книгите по азбучен ред според заглавието на книгата (или името на автора).*/

#ifndef Books_H
#define Books_H

struct Reader{
private:
	char* firstName;
	char* lastName;
	int number;
	void cpy(char*, char*, int);
public:
	Reader(char* = "", char* = "", int = 0);
	~Reader();
	Reader(const Reader&);
	Reader& operator=(const Reader&);
	char* getFirstName()const;
	char* getLastName()const;
	int getNumber()const;
	void print()const;
};

struct Book{
private:
	char* title;
	char* author;
	char* isFree;
	int libNumber;
	Reader taker;
	void cpy(char*, char*, char*, int);
public:
	Book(char* = "", char* = "", char* = "", int = 0);
	~Book();
	Book(const Book&);
	Book& operator=(const Book&);
	char* getTitle()const;
	char* getAuthor()const;
	char* getTaken()const;
	int getLibNumber()const;
	Reader getTaker();
	void print()const;
	void takeBook(Reader&);
	void isTaken();		
	void isntTaken();
};
#endif // !Books_H
