#ifndef BinaryOrderedTree_H
#define BinaryOrderedTree_H

struct Node{
	int inf;
	Node* left;
	Node* right;

	Node(int, Node*, Node*);

};

class BOT{
private:
	Node* root;
	void privateInsert(int key, Node* &root);
	Node** privateSearch(int key, Node* &root);
	Node* privateRemove(int key, Node* root);
	Node* findPred(Node*);
public:
	BOT(Node*);
	~BOT();
	
	void insert(int);
	void remove(int);
	bool search(int);
};

#endif