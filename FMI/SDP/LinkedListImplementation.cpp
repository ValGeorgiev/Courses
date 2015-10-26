#include <iostream>
using namespace std;

struct Node{
	int inf;
	Node* next;
};

class LList{
private:
	Node* start;
	Node* end;
public:
	LList(){
		start = NULL;
		end = NULL;
	}
	~LList(){

	}
	bool toEnd(int x){
		Node* elem = new Node;
		elem->next = NULL;

		elem->inf = x;

		if (start == NULL)
		{

			start = elem;
			end = elem;
		}
		else{
			end->next = elem;
			end = elem;
		}
		return true;
	}
	bool toStart(int x){
		Node* elem = new Node;
		elem->inf = x;
		if (start == NULL){
			start = elem;
			elem->next = NULL;
			end = elem;
		}
		else{
			elem->next = start;
			start = elem;
		}
		
		return true;
	}
	bool removeEnd(){
		Node* elem = start;

		if (start == NULL){
			return false;
		}

		while (elem->next != end)
		{
			elem = elem->next;
		}
		delete end;
		end = elem;
		end->next = NULL;
		return true;
	}
	bool removeStart(){

		if (start != NULL){
			Node* elem = start;
			start = start->next;
			delete elem;
			return true;
		}
		else{
			cout << "Linked list is empty" << endl;
			return false;
		}

	}
	Node* find(int x){
		Node* elem = start;
		while (!(elem->inf == x))
		{
			elem = elem->next;
		}
		return elem;
	}
	void insertBefore(Node* elem, int x){
		Node* newElem = start;
		while (newElem->next->inf != elem->inf)
		{
			newElem = newElem->next;
		}
		Node* insertedElem = new Node;
		insertedElem->inf = x;
		newElem->next = insertedElem;
		
		insertedElem->next = elem;
	}
	void insertAfter(Node* elem, int x){
		Node* newElem = elem->next;
		Node* second = new Node;
		second->inf = x;
		elem->next = second;
		second->next = newElem;

	}
	void print(){   
		Node* otherStart = this->start;
		while (otherStart != NULL){
			cout << otherStart->inf << endl;
			otherStart = otherStart->next;
		}
	}
};
int main(){
	LList myList;
	myList.toStart(1);
	myList.toStart(2);
	myList.toStart(3);
	myList.toStart(4);
	myList.toStart(5);
	myList.toEnd(6);
	myList.insertBefore(myList.find(3), 55);
	myList.insertAfter(myList.find(3), 55);
	myList.print();

}