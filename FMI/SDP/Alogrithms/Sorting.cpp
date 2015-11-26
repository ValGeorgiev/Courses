#include<iostream>
using namespace std;

void print(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

/*-----------Insertion--Sort----------*/
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

/*-----------Selection--Sort----------*/
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


/*-----------Bubble--Sort----------*/
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


/*-----------Quick--Sort----------*/
int partition(int arr[], int left, int right) {
	int pivot = arr[right];
	int i = left;
	for (int j = left; j < right; j++)
	{
		if (arr[j] <= pivot)
		{
			int tmp = arr[j];
			arr[j] = arr[i];
			arr[i] = tmp;
			i++;
		}
	}
	int tmp = arr[i];
	arr[i] = arr[right];
	arr[right] = tmp;
	return i;
}

void quickSort(int arr[], int left, int right) {
	if (left < right)
	{
		int p = partition(arr, left, right);
		quickSort(arr, left, p - 1);
		quickSort(arr, p + 1, right);
	}	
}


/*-----------Heap--Sort----------*/
void heapify(int* arr, int left, int right)
{
	int i = left,
		j = i + i;
	int x = arr[i];
	while (j <= right) {
		if (j < right && arr[j] < arr[j + 1]) {
			j++;
		}
		if (x >= arr[j]) {
			break;
		}
		arr[i] = arr[j];
		i = j;
		j <<= 1; /* ???????????? ?? j *= 2; */
	}
	arr[i] = x;
}
void heapSort(int* arr, int n) {
	int i;
	for (i = n/2 + 1; i > 0; i--)
	{
		heapify(arr, i - 1, n);
	}
	for (i = n; i > 0; i--)
	{
		int tmp = arr[i];
		arr[i] = arr[0];
		arr[0] = tmp;
		heapify(arr, 0, i - 1);
	}
}
int main() {
	int arr[] = { 5,2,3,1,7,4,12,0,10 };
	int size = 9;

	//insertionSort(arr, size);
	//selectionSort(arr, size);
	//bubbleSort(arr, size);
	
	/*quickSort(arr, 0, size - 1);
	print(arr, size);*/

	heapSort(arr, size - 1);
	print(arr, size);
}