#include<iostream>
using namespace std;

void bSearch(int* arr, int x, int left, int right) {
	if (left > right)
	{
		cout << "Doesn't have this number!" << endl;
		return;
	}
	int mid = (left + right) / 2;
	if (x == arr[mid])
	{
		cout << "Is here : " << x << " on place: " << mid << endl;
		return;
	}
	if (x > arr[mid])
	{
		bSearch(arr, x, mid + 1, right);
	}
	else {
		bSearch(arr, x, left, mid - 1);
	}
}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int x = 3;

	bSearch(arr, x, 0, 9);
}
