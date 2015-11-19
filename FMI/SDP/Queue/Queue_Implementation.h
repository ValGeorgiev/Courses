#ifndef Queue_H
#define Queue_H

struct Node {
	int inf;
	Node* next;
};

class Queue {
private:
	int capacity;
	Node* start;
	Node* end;
public:
	Queue();
	~Queue();

	void popFront();
	void pushBack(int);

	int front()const;
	bool empty()const;
	int size()const;
	void print()const;
};


#endif