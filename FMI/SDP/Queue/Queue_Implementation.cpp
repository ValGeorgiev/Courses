#include<iostream>
#include"Queue_Implementation.h"
using namespace std;

Queue::Queue() {
	start = NULL;
	end = NULL;
	capacity = 0;
}

Queue::~Queue() {

}

void Queue::popFront() {
	start = start->next;
	capacity--;
}
void Queue::pushBack(int x) {
	Node* newElem = new Node;
	newElem->inf = x;
	newElem->next = NULL;
	if (start == NULL ) {
		start = newElem;
	}
	else {
		end->next = newElem;
	}
	end = newElem;
	capacity++;
}

void Queue::print()const {
	Node* otherStart = start;
	while (otherStart != NULL)
	{
		cout << otherStart->inf << endl;
		otherStart = otherStart->next;
	}
}
int Queue::front()const {
	return start->inf;
}

bool Queue::empty()const {
	if (capacity == 0) {
		return true;
	}
	return false;
}
int Queue::size()const {
	return capacity;
}

int main() {
	Queue que;
	cout << "is empty: " << que.empty() << endl;
	que.pushBack(3);
	que.pushBack(4);
	que.pushBack(5);
	que.pushBack(6);
	que.popFront();
	que.popFront();
	cout << "Front: " << que.front() << endl;
	cout << "Capacity: " << que.size() << endl;
	que.print();
}