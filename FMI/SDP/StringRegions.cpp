#include <iostream>
#include <string>
using namespace std;

void swapFunction(string &s, int i, int j){
	char tmp = s[i];
	s[i] = s[j];
	s[j] = tmp;
}


void swapEquals(string &s, int i, int j, int size){
	for (int k = 0; k < size; k++){
		swapFunction(s, i + k, j + k);
	}
	cout << s << endl;
}

void swapNotEquals(string &s, int i, int j, int p){
	if (!((p > i) && (i > j))){
		throw "NOT CORRECT ARGUMENTS";
	}

	int fsl = i - j;		//first section length
	int ssl = p - i;		//second section length

	while (fsl != ssl){
		if (fsl > ssl){
			swapEquals(s, i - fsl, i, ssl);
			fsl -= ssl;
		}
		else{
			swapEquals(s, i - fsl, j + ssl - fsl, fsl);
			ssl -= fsl;
		}
		swapEquals(s, i - fsl, i, fsl);
	}
}

void reverseSection(string &s, int i, int size){
	for (int k = 0; k < size / 2; k++)
	{
		swapFunction(s, k + i,  size + i - k);
	}
	cout << s << endl;
}





int main(){
	int a;
	cout << "a = ";
	cin >> a;
	int b; 
	cout << "b = ";
	cin >> b;
	int size;
	cout << "size =  ";
	cin >> size;
	string s = "Hello_World!";
	
	/*swapEquals(s, a, b, size);*/

	/*reverseSection(s, a, size);*/

	swapNotEquals(s, 3, 6, 11);
}