#include<iostream>
#include<stack>
using namespace std;

void stackRealization(char* str){	// stack O(1) all function
	stack<char> myStack;			// this algorithm O(n)
	char* res = new char[strlen(str) + 1];
	
	for (int i = 0; i < strlen(str); i++)
	{
		myStack.push(str[i]);
	}
	
	for (int i = 0; i < strlen(str); i++)
	{
		res[i] = myStack.top();
		myStack.pop();
	}
	
	res[strlen(str)] = '\0';
	cout << "Result: " << res << endl;
}

bool correctBrackets(char* str){	
	stack<char> myStack;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ')'){
			if (myStack.empty()){
				cout << "Not correct brackets" << endl;
				return false;
			}
			else{
				myStack.pop();
			}
		}
		else if (str[i] == '('){
			myStack.push(str[i]);
		}
	}
	return myStack.empty();
}


int main(){
	char* str = "Hello";
	char* bracket = "((dad)()))";

	stackRealization(str);
	if (correctBrackets(bracket)){
		cout << "Is correct" << endl;
	}
}