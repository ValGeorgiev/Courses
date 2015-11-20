#include<iostream>
#include"DLList.h"
using namespace std;

DLinkedList::DLinkedList() {
	start = NULL;
	end = NULL;
}
DLinkedList::~DLinkedList() {

}

//Works
void DLinkedList::insertStart(int x) {
	Node* newElem = new Node;
	newElem->inf = x;
	if (start == NULL)
	{
		newElem->next = NULL;
		end = newElem;
		start = newElem;
	}
	else {
		newElem->next = start;
	}
	newElem->prev = NULL;
	start = newElem;
}

//Works
void DLinkedList::insertEnd(int x) {
	Node* newElem = new Node;
	newElem->inf = x;
	if (end == NULL)
	{
		insertStart(x);
	}
	else {
		newElem->prev = end;
		end->next = newElem;
		newElem->next = NULL;
		end = newElem;
	}
}

//Works
void DLinkedList::insertAfter(Node* elem, int x) {
	if (elem->next == NULL)
	{
		insertEnd(x);
		return;
	}
	Node* newElem = new Node;
	Node* afterElem = elem->next;
	newElem->inf = x;
	newElem->next = afterElem;
	newElem->prev = elem;
	elem->next = newElem;
	afterElem->prev = newElem;
}

//Works
void DLinkedList::insertBefore(Node* elem, int x) {
	if (elem->prev == NULL) {
		insertStart(x);
		return;
	}
	Node* newElem = new Node;
	Node* beforeElem = elem->prev;
	newElem->inf = x;
	newElem->next = elem;
	newElem->prev = beforeElem;
	elem->prev = newElem;
	beforeElem->next = newElem;
}

//Works
void DLinkedList::insertBetween(Node* beforeElem, Node* afterElem, int x) {
	Node* newElem = new Node;
	newElem->inf = x;
	newElem->prev = beforeElem;
	newElem->next = afterElem;
	beforeElem->next = newElem;
	afterElem->prev = newElem;
}

//Works
void DLinkedList::remove(Node* elem) {
	if (elem == start) {
		start = elem->next;
	}
	else if (elem == end) {
		end = elem->prev;
		end->next = NULL;
	}
	else {
		elem->prev->next = elem->next;
		elem->next->prev = elem->prev;
	}
	delete elem;
}

//Works
int DLinkedList::front() {
	return start->inf;
}

bool DLinkedList::isEmpty()const {
	if (start == NULL && end == NULL) {
		return true;
	}
	return false;
}

//Works
void DLinkedList::print() const{
	Node* otherStart = start;

	while (otherStart != NULL) {
		cout << otherStart->inf << endl;
		otherStart = otherStart->next;
	}
}

//Works
Node* DLinkedList::search(int x) {
	Node* otherStart = start;
	while (otherStart != NULL)
	{
		if (otherStart->inf == x)
		{
			return otherStart;
		}
		otherStart = otherStart->next;
	}
	return NULL;
}




int main() {
	DLinkedList dll;
	cout << "Empty : " << dll.isEmpty() << endl;
	dll.insertStart(2);
	dll.insertStart(3);
	dll.insertStart(4);
	dll.insertEnd(1);
	dll.insertEnd(0);

	cout << "Empty : " << dll.isEmpty() << endl;

//	dll.insertAfter(dll.search(1), 10);
//	dll.insertBefore(dll.search(4), 11);
	dll.insertBetween(dll.search(3), dll.search(2), 23);
	dll.remove(dll.search(4));
	dll.remove(dll.search(0));
	dll.print();

	cout << "Front: " << dll.front() << endl;
}