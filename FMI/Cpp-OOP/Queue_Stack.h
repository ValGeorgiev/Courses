#ifndef Queue_Stack_H
#define Queue_Stack_H

class Stack{
private:
	char items[100];
	int top;
public:
	Stack();
	Stack(const Stack&);
	void push(char c);
	char pop();
	bool empty()const;
	bool full()const;
	void print();
};
class Queue : private Stack{
public:
	Queue();
	void add(const char&);
	void remove();
	char front();
	bool empty()const;
	bool full()const;
	int length();
	void print();
};

#endif // !Queue_Stack_H
