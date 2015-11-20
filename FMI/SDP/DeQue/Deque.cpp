#include<iostream>
#include"Deque.h"
using namespace std;

Deque::Deque() {
	start = NULL;
	end = NULL;
}
Deque::~Deque() {

}

//Works
void Deque::pushStart(int x) {
	Node* newElem = new Node;
	newElem->inf = x;
	if (start == NULL) {
		newElem->next = NULL;
		start = newElem;
		end = newElem;
		
	}
	else {
		newElem->next = start;
		start = newElem;
	}
}

//Works
void Deque::pushEnd(int x) {
	if (end == NULL)
	{
		pushStart(x);
	}
	else {
		Node* newElem = new Node;
		newElem->inf = x;
		end->next = newElem;
		newElem->next = NULL;
		end = newElem;
	}
}

//Works
void Deque::popStart() {
	Node* newStart = start;
	newStart = start->next;
	delete start;
	start = newStart;
}

//Works
void Deque::popEnd() {
	Node* otherStart = start;
	Node* newEnd = end;
	while (otherStart != NULL)
	{
		if (otherStart->next == end) {
			newEnd = otherStart;
			delete end;
			end = newEnd;
			end->next = NULL;
		}
		otherStart = otherStart->next;
	}

}

//Works
void Deque::print()const {
	Node* otherStart = start;
	while (otherStart != NULL)
	{
		cout << otherStart->inf << endl;
		otherStart = otherStart->next;
	}
}

//Works
int Deque::front()const {
	return start->inf;
}

//Works
int Deque::back()const {
	return end->inf;
}

//Works
bool Deque::isEmpty()const {
	if (start == NULL && end == NULL) {
		return true;
	}
	return false;
}

int main() {
	Deque deq;
	cout << "Is empty : " << deq.isEmpty() << endl;
	deq.pushStart(1);
	deq.pushStart(0);
	deq.pushEnd(4);
	deq.pushEnd(5);
	deq.pushEnd(6);
	deq.popStart();
	cout << "Is empty : " << deq.isEmpty() << endl;
	deq.popEnd();
	deq.pushEnd(10);

	deq.pushStart(-20);

	cout << "front : " << deq.front() << endl;
	cout << "back : " << deq.back() << endl;
	
	deq.print();
}