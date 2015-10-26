#include<iostream>
#include<stack>
using namespace std;

class Queue{
private:
	stack<int> first;
	stack<int> second;
public:
	Queue();
	void popFront();
	void pushBack(int);
	void front();
	bool empty();
	void size();
};
Queue::Queue(){

}

void Queue::popFront(){
	cout << "Pop: " << second.top() << endl;
	if (!second.empty()){
		second.pop();
	}
	else{
		cout << "Queue is empty!! " << endl;
	}
}
void Queue::pushBack(int number){
		first.push(number);
		for (int i = 0; i < first.size(); i++)
		{
			second.push(first.top());
			first.pop();
		}
}


void Queue::front(){
	cout << "Front: " << second.top() << endl;
}

void Queue::size(){
	cout << "Size " << second.size() << endl;
}

bool Queue::empty(){
	return second.empty();
}

//int main(){
//	Queue myQueue;
//	myQueue.pushBack(1);
//	myQueue.pushBack(2);
//	myQueue.pushBack(3);
//	myQueue.pushBack(4);
//	myQueue.pushBack(5);
//	myQueue.front();
//	myQueue.popFront();
//	myQueue.popFront();
//	myQueue.popFront();
//	cout << "Empty : " << myQueue.empty() << endl;
//	myQueue.size();
//
//}