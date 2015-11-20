#ifndef Deque_H
#define Deque_H

struct Node {
	int inf;
	Node* next;
};

class Deque {
private:
	Node* start;
	Node* end;
public:
	Deque();
	~Deque();

	void pushStart(int);
	void pushEnd(int);
	void popStart();
	void popEnd();

	void print()const;
	int front()const;
	int back()const;

	bool isEmpty()const;
};

#endif // !Deque_H
