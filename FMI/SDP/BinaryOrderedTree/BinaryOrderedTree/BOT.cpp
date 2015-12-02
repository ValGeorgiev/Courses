#include <iostream>
#include "BOT.h"
using namespace std;

Node::Node(int inf = 0, Node* left = NULL, Node* right = NULL) :inf(inf), left(left), right(right)
{

}

BOT::BOT(Node* root = NULL) : root(root){

}

BOT::~BOT(){

}

void BOT::insert(int key){
	privateInsert(key, root);
}

void BOT::privateInsert(int key, Node* &root){
	if (!root)
	{
		root = new Node(key);
	}
	else{
		if (root->inf > key)
		{
			privateInsert(key, root->left);
		}
		if (root->inf <= key)
		{
			privateInsert(key, root->right);
		}
	}
}

Node** BOT::privateSearch(int key, Node* &root){
	if (!root)
	{
		return NULL;
	}
	if (root->inf == key)
	{
		return &root;
	}
	else if (root->inf > key){
		privateSearch(key, root->right);
	}
	else{
		privateSearch(key, root->left);
	}
}

void BOT::remove(int key){
	privateRemove(key, root);
}

Node* BOT::findPred(Node* root){
	static Node* pred;
	if (root == NULL)
	{
		return pred;
	}
	else{
		pred = root;
		return findPred(root->right);
	}
}

Node* BOT::privateRemove(int key, Node* root){
	Node* save;
	if (root == NULL)
	{
		cout << "Sorry this Node doesn't exist!" << endl;
		return NULL;
	}
	if (root->inf == key)
	{
		if (root->right == NULL && root->left == NULL)
		{
			free(root);
			return NULL;
		}
		else if (root->right == NULL || root->left == NULL){
			if (root->right == NULL)
			{
				save = root->left;
				free(root);
				return save;
			}
			else{
				save = root->right;
				free(root);
				return save;
			}
		}
		else{
			save = findPred(root->left);
			root->inf = save->inf;
			root->left = privateRemove(root->inf, root->left);
			return root;
		}
	}
	else if (root->inf < key){
		root->right = privateRemove(key, root->right);
	}
	else if (root->inf > key){
		root->left = privateRemove(key, root->left);
	}
}

bool BOT::search(int key){
	return privateSearch(key, root);
}



int main(){
	BOT myBOT;
	myBOT.insert(5);
	myBOT.insert(6);
	myBOT.remove(5);
}