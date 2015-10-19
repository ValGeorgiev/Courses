#include <iostream>
using namespace std;

struct Node
{
	int inf;
	Node* next;
	
};

class LinkedList{
private:
	Node* start;
	Node* end;
public:
	LinkedList(){
		start = NULL;
		end = NULL;
	}
	~LinkedList(){
		
	}
	
	bool push(int x){		//push in linked list  
		if (start == NULL)			
		{
			Node* elem = new Node;
			elem->inf = x;
			elem->next = NULL;
			start = elem;
			end = elem;
		}
		else{
			Node* elem = new Node;
			elem->inf = x;
			elem->next = NULL;
			end->next = elem;
			end = elem;
		}
		return true;
	}

	bool pop(){					// pop start 
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
	void pushSort(int val){			// push and sort
		if (start == NULL) {
			start = new Node;
			end = start;
		}
		else {
			Node* first = start;
			Node* second = start->next;
			if (second == NULL) {
				if (val > first->inf) {
					Node* elem = new Node;
					first->next = elem;
				}
				else {
					Node* elem = new Node;
					elem->next = start;
					start = elem;
				}
			}
			else {
				if (val < first->inf) {
					Node* elem = new Node;
					elem->next = start;
					start = elem;
				}
				else {
					while (second != NULL) {
						if (first->inf < val && second->inf > val) {
							cout << "first val: " << first->inf << " sec val: " << second->inf << endl;
							insertBetween(first, second, val);
						}
						first = second;
						second = second->next;

					}

					if (first->inf < val) {
						insertEnd(val);
						Node* elem = new Node;
						first->next = elem;
					}
				}
			}
		}

	}

	void insertBetween(Node* first, Node* second, int x){		//insert node between two nodes
		Node* elem = new Node;
		first->next = elem;
		elem->next = second;
		elem->inf = x;
	}

	void insertEnd(int x){			// insert node at end position
		Node* elem = new Node;
		elem->inf = x;
		elem->next = NULL;
		end->next = elem;
		end = elem;
	}

	
	void sort(){			// sort linked list
		Node* temp = start;
		Node* otherStart = start->next;
		while (temp->next != NULL){
			int swapper;
			
			while (otherStart != NULL){
			
				if (otherStart->inf < temp->inf){
					swapper = temp->inf;
					temp->inf = otherStart->inf;
					otherStart->inf = swapper;
				}
				otherStart = otherStart->next;
			}

			temp = temp->next;
			otherStart = temp->next;
		}
	}
	void print(){   // print linked list
		Node* otherStart = this->start;
		while (otherStart != NULL){
			cout << otherStart->inf << endl;
			otherStart = otherStart->next;
		}
	}

	int front() {
		if (start != NULL)
			return start->inf;
	}

	int back() {
		if (end != NULL)
			return end->inf;
	}
};


int main(){
	LinkedList myLinkedList;
	myLinkedList.push(5);
	myLinkedList.push(6);
	myLinkedList.push(7);
	myLinkedList.push(8);
	myLinkedList.push(1);
	myLinkedList.push(9);

	myLinkedList.print();
	
	//myLinkedList.pop();
	cout << endl;
	myLinkedList.print();
	cout << endl;


	//LinkedList.sort()	// sort LinkedList
}