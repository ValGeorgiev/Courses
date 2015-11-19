#include<iostream>
#include "Stack_Implementation.h"
using namespace std;

Stack::Stack(int size) {
	this->size = size;
	this->stackArray = new int[size];
	this->firstElement = 0;
}
Stack::~Stack() {
	delete[] stackArray;
}

void Stack::push(int x) {
	if (this->size == this->firstElement) {
		cout << "The stack is full!" << endl;
		return;
	}
	stackArray[firstElement++] = x;
}
int Stack::top()const {
	return stackArray[firstElement - 1];
}
void Stack::pop() {
	firstElement--;
}
bool Stack::isEmpty() {
	if (firstElement == 0)
	{
		return true;
	}
	return false;
}
void Stack::print()const {
	for (int i = firstElement - 1; i >= 0; i--)
	{
		cout << stackArray[i] << endl;
	}
}

int main() {
	Stack myStack(4);
	cout << "Is empty : " << myStack.isEmpty() << endl;
	myStack.push(1); 
	myStack.push(2);
	myStack.push(3);
	//cout << "Top : " << myStack.top() << endl;
	myStack.pop();
	//cout << "Top : " << myStack.top() << endl;
	myStack.push(5);
	cout << "Top : " << myStack.top() << endl;
	myStack.print();
}