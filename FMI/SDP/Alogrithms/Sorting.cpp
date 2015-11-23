#include<iostream>
using namespace std;

void print(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

void insertionSort(int arr[], int size) {
	int j, i;
	for (i = 1; i < size; i++)
	{
		j = i;
		while (j > 0 && arr[j-1] > arr[j])
		{
			int tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j = j - 1;
		}
	}
	print(arr, size);

}

void selectionSort(int arr[], int size) {
	int min = 0;
	int minIndex = 0;
	for (int i = 0; i < size; i++)
	{
		min = arr[i];
		minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				minIndex = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = tmp;
	}
	print(arr, size);
}

void bubbleSort(int arr[], int size) {
	for (int j = 0; j < size; j++)
	{
		for (int i = 1; i < size; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				int tmp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = tmp;
			}
		}
	}
	print(arr, size);
}


int main() {
	int arr[] = { 5,2,3,1,7,4,12,0,10 };
	int size = 9;

	//insertionSort(arr, size);
	//selectionSort(arr, size);
	//bubbleSort(arr, size);
}