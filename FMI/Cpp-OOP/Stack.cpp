#include <iostream>
#include <assert.h>
#include "Stack.h"
using namespace std;

template<typename Prim>
Stack<Prim>::Stack(){
	start = NULL;
}

template<typename Prim>
Stack<Prim>::~Stack(){
	delStack();
}

template<typename Prim>
Stack<Prim>& Stack<Prim>::operator=(const Stack<Prim>& other){
	if (this != &other){
		delStack();
		copyStack(other);
	}
	return *this;
}

template<typename Prim>
Stack<Prim>::Stack(const Stack<Prim>& other){
	copyStack(other);
}

template<typename Prim>
void Stack<Prim>::delStack(){
	Element<Prim> *pointer;
	while (start){
		pointer = start;
		start = start->link;
		delete pointer;
	}
}

template<typename Prim>
void Stack<Prim>::copyStack(const Stack<Prim>& other){
	if (other.start){
		Element<Prim> *pointer = other.start,
			*otherPointer = NULL,
			*lastPointer = NULL;
		start = new Element<Prim>;
		assert(start != NULL);
		start->inf = pointer->inf;
		start->link = otherPointer;
		otherPointer = start;
		pointer = pointer->link;
		while (pointer){
			lastPointer = new Element<Prim>;
			assert(lastPointer != NULL);
			lastPointer->inf = pointer->inf;
			otherPointer->link = lastPointer;
			otherPointer = lastPointer;
			pointer = pointer->link;
		}
		otherPointer->link = NULL;
	}
	else{
		start = NULL;
	}
}

template<typename Prim>
void Stack<Prim>::push(const Prim& other){
	Element<Prim> *pointer = start;
	start = new Element<Prim>;
	assert(start != NULL);
	start->inf = other;
	start->link = pointer;
}

template<typename Prim>
void Stack<Prim>::pop(Prim& other){
	if (start){
		other = start->inf;
		Element<Prim> *pointer = start;
		start = start->link;
		delete pointer;
	}
	else{
		cout << "The stack is empty!" << endl;
		exit(1);
	}
}

template<typename Prim>
bool Stack<Prim>::empty()const{
	return start == NULL;
}

template<typename Prim>
void Stack<Prim>::print(){
	Prim x;
	while (!empty()){
		pop(x);
		cout << x << " ";
	}	
	cout << endl;
}

template<typename Prim>
int Stack<Prim>::length(){
	int len = 0;
	Prim x;
	while (!empty()){
		pop(x);
		n++;
	}
	return n;
}

template<typename Prim>
void minStack(Stack<Prim> same, Prim& min, Stack<Prim>& newStack){
	Prim x;
	same.pop(min);
	while (!same.empty()){
		same.pop(x);
		if (x < min){
			newStack.push(min);
			min = x;
		}
		else{
			newStack.push(x);

		}
	}
}

template<typename Prim>
void sortStack(Stack<Prim> same, Stack<Prim>& newStack){
	while (!same.empty()){
		Prim min;
		Stack<Prim> other;
		minStack(same, min, other);
		newStack.push(min);
		same = other;
	}
}

int main(){
	typedef Stack<int> intStack;
	intStack firstStack,
		secondStack;

	firstStack.push(1);
	firstStack.push(123);
	firstStack.push(11);
	firstStack.push(131);
	firstStack.push(41);
	firstStack.push(141);
	firstStack.push(53);
	
	sortStack(firstStack, secondStack);

	secondStack.print();
	
	return 0;
}