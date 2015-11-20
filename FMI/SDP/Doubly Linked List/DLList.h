#ifndef Doubly_Linked_List
#define Doubly_Linked_List

struct Node {
	int inf;
	Node* next;
	Node* prev;
};

class DLinkedList {
private:
	Node* start;
	Node* end;
public:
	DLinkedList();
	~DLinkedList();


	void insertStart(int);
	void insertEnd(int);
	void insertAfter(Node*, int);
	void insertBefore(Node*, int);
	void insertBetween(Node*, Node*, int);

	void remove(Node*);
	int front();

	bool isEmpty()const;

	void print()const;
	Node* search(int);

};


#endif