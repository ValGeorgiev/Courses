#ifndef MergeSortedLists_H
#define MergeSortedLists_H

struct Node {
	int inf;
	Node* next;
};

class SortedList {
private:
	int size;
	Node* start;
	Node* end;
public:
	SortedList();
	~SortedList();

	void insert(int);

	void remove(Node*);

	Node* search(int);
	void print()const;
};


#endif