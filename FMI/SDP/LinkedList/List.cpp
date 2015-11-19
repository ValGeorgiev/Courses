#include<iostream>
#include"LList.h"
using namespace std;

LList::LList() {
	start = NULL;
	end = NULL;
}

LList::~LList() {

}


//Test and Works
void LList::insertStart(int x) {
	Node* newElem = new Node;
	newElem->inf = x;
	if (start == NULL)
	{
		newElem->next = NULL;
		end = newElem;
	}
	else {
		newElem->next = start;
	}
	start = newElem;
}

//Test and Works
void LList::insertEnd(int x) {
	Node* newElem = new Node;
	newElem->inf = x;
	if (end == NULL)
	{
		insertStart(x);
	}
	else {
		end->next = newElem;
		newElem->next = NULL;
		end = newElem;
	}
}

//Test and Works
void LList::insertBefore(Node* elem, int x) {
	if (elem == start) {
		insertStart(x);
		return;
	}
	Node* nodeBeforeFoundNode = start;
	while (nodeBeforeFoundNode != NULL)
	{
		if (nodeBeforeFoundNode->next == elem)
		{
			break;
		}
		nodeBeforeFoundNode = nodeBeforeFoundNode->next;
	}
	
	Node* newElem = new Node;
	newElem->inf = x;
	nodeBeforeFoundNode->next = newElem;
	newElem->next = elem;



}

//Test and Works
void LList::insertAfter(Node* elem, int x) {
	Node* nodeAfterFoundNode = start;
	while (nodeAfterFoundNode != NULL)
	{
		if (elem->next == nodeAfterFoundNode)
		{
			break;
		}
		nodeAfterFoundNode = nodeAfterFoundNode->next;
	}
	Node* newElem = new Node;
	newElem->inf = x;
	newElem->next = nodeAfterFoundNode;
	elem->next = newElem;

}

//Test and Works
void LList::insertBetween(Node* beforeNew, Node* afterNew, int x) {
	
	Node* newElem = new Node;
	newElem->inf = x;
	beforeNew->next = newElem;
	newElem->next = afterNew;
}

//Test and Works
void LList::remove(Node* elem) {
	Node* otherStart = start;
	while (otherStart != NULL)
	{
		if (otherStart->next == elem) {
			if (elem == end) {
				end = otherStart;
				otherStart->next = NULL;
			}
			else {
				otherStart->next = elem->next;
			}
			delete elem;
		}
		otherStart = otherStart->next;
	}
}

//Test and Works
void LList::print()const{
	Node* otherStart = start;
	while (otherStart != NULL)
	{
		cout << otherStart->inf << endl;
		otherStart = otherStart->next;
	}
}

//Test and Works
Node* LList::search(int elemInf) {
	Node* otherStart = start;
	while (otherStart != NULL)
	{
		if (otherStart->inf == elemInf)
		{
			//cout << "Is here!" << endl;
			return otherStart;
		}
		otherStart = otherStart->next;
	}
	//cout << "Is not here!" << endl;
	return NULL;
}


int main() {
	LList linkedList;
	linkedList.insertEnd(3);
	linkedList.insertEnd(5);
	linkedList.insertEnd(2);/*
	linkedList.insertAfter(linkedList.search(3), 4);
	linkedList.insertBefore(linkedList.search(2), 6);
	linkedList.insertBetween(linkedList.search(3), linkedList.search(5), 4);*/
	linkedList.remove(linkedList.search(2));
	linkedList.insertEnd(15);
	linkedList.print();
}