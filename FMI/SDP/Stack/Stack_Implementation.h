#ifndef Stack_H
#define Stack_H

class Stack {
private:
	int size;
	int* stackArray;
	int firstElement;
public:
	Stack(int);
	~Stack();
	
	int top()const;
	void push	(int);
	void pop();

	bool isEmpty();
	void print()const;

	
};

#endif