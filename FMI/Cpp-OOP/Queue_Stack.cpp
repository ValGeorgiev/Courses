#include <iostream>
#include "Queue_Stack.h"
using namespace std;

const int FullStack = 100;
const int EmptyStack = -1;
const char EmptyFlag = '\0';

Stack::Stack(){
	top = EmptyStack;
}
Stack::Stack(const Stack& other){
	top = other.top;
	for (int i = 0; i < top; i++){
		items[i] = other.items[i];
	}
}
void Stack::push(char _char){
	if (full()){
		cout << "The stack is full!" << endl;
		return;
	}
	items[++top] = _char;
}
char Stack::pop(){
	if (empty()){
		cout << "The stack is empty!" << endl;
		return EmptyFlag;
	}
	return items[top--];
}
bool Stack::empty()const{
	return top == EmptyStack;
}
bool Stack::full()const{
	return top == FullStack - 1;
}
void Stack::print(){
	for (int i = top; i >= 0; i--){
		cout << pop() << endl;
	}
}

Queue::Queue(){}
void Queue::add(const char& _char){
	Stack stack;
	while (!empty()){
		stack.push(pop());
	}
	push(_char);
	while (!stack.empty()){
		push(stack.pop());
	}
}
void Queue::remove(){
	pop();
}
char Queue::front(){
	char head = pop();
	push(head);
	return head;
}
bool Queue::empty()const{
	return Stack::empty();
}
bool Queue::full()const{
	return Stack::full();
}
int Queue::length(){
	Stack stack = *this;
	int count = 0;
	while (stack.pop()){
		count++;
	}
	return count;
}
void Queue::print(){
	Stack::print();
}

int main(){
	Queue firstQueue;
	cout << "Enter symbols: " << endl;
	cout << "If you want to stop, enter '#'! " << endl;
	while (!firstQueue.full()){
		char ch;
		cout << "> ";
		cin >> ch;
		if (ch != '#'){
			firstQueue.add(ch);
		}
		else{
			break;
		}
	}
	Queue secondQueue = firstQueue;
	firstQueue.print();
	/*while (!secondQueue.empty()){
		cout << secondQueue.front() << endl;
		secondQueue.remove();
	}*/
	return 0;
}