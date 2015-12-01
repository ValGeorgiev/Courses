#include <iostream>
#include"MergeSortedLists.h"
using namespace std;

SortedList::SortedList() {
	start = NULL;
	end = NULL;
	size = 0;
}
SortedList::~SortedList() {

}

void SortedList::insert(int x) {
	Node* newElem = new Node;
	newElem->inf = x;
	if (size == 0) {
		newElem->next = NULL;
		start = newElem;
		end = newElem;
	}
	else {
		Node* otherStart = start;
		while (otherStart != NULL)
		{
			if (newElem->inf <= start->inf )
			{
				newElem->next = start;
				start = newElem;
				break;
			}
			if (newElem->inf >= end->inf)
			{
				end->next = newElem;
				newElem->next = NULL;
				end = newElem;
				break;
			}
			if (otherStart->inf >= newElem->inf)
			{
				Node* newStart = start;
				while (newStart != NULL)
				{
					if (newStart->next == otherStart)
					{
						newStart->next = newElem;
						newElem->next = otherStart;
						return;
					}
					newStart = newStart->next;
				}
			}
			otherStart = otherStart->next;
		}
	}
	size++;
}

void SortedList::remove(Node* elem) {
	if (elem == NULL)
	{
		cout << "Sorry this node doesn't exist! " << endl;
		return;
	}
	if (elem == start)
	{
		start = start->next;
	}
	Node* otherStart = start;
	while (otherStart != NULL)
	{
		if (otherStart->next == elem)
		{
			break;
		}
	}
	otherStart->next = elem->next;

}

Node* SortedList::search(int x) {
	Node* otherStart = start;
	while (otherStart != NULL)
	{
		if (otherStart->inf == x) {
			return otherStart;
		}
		otherStart = otherStart->next;
	}
	return NULL;
}

void SortedList::print()const {
	Node* newStart = start;
	while (newStart != NULL)
	{
		cout << newStart->inf << endl;

		newStart = newStart->next;
	}
}

int main() {
	SortedList sList;
	sList.insert(5);
	sList.insert(4);
	sList.insert(9);
	sList.insert(6);
	sList.insert(7);
	sList.insert(1);
	sList.remove(sList.search(1));
	sList.print();
}