#include <iostream>
using namespace std;

void print(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void permute(int arr[], int size, int n) {
	if (size < n)
	{
		print(arr, size);
	}
	else {
		permute(arr, size, n + 1);
		for (int i = n + 1; i < size; i++)
		{
			int tmp = arr[n];
			arr[n] = arr[i];
			arr[i] = tmp;

			permute(arr, size, n + 1);

			int tmp2 = arr[n];
			arr[n] = arr[i];
			arr[i] = tmp2;

		}
	}
}

void permuteReps(int arr[], int size, int n) {
	print(arr, size);
	for (int left = size - 1; left >= n; left--)
	{
		for (int right = left + 1; right <= size -1; right++)
		{
			if (arr[left]  != arr[right])
			{
				int tmp = arr[left];
				arr[left] = arr[right];
				arr[right] = tmp;

				permuteReps(arr, size, left + 1);
			}
		}
		int firstElement = arr[left];
		for (int i = left; i <= size - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = firstElement;
	}
}


int main() {
	int arr[] = { 1,3,5,5 };
	int n = 4;
	int size = 4;
/*
	permute(arr, size, 0);*/

	permuteReps(arr, size, 0);
}