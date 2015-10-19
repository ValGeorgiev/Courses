#include <iostream>
using namespace std;

void mergeArrays(int* arr, int len, int* arr2, int len2){   // Time O(n + m)
	int k = 0;												// pamet O(n + m)
	int i = 0;
	int j = 0;
	int* result = new int[len + len2];
	
	for (; i < len && j < len2; )
	{
		if (arr[i] < arr2[j]){
			result[k++] = arr[i++];
		}
		else{
			result[k++] = arr2[j++];
		}
	}
	for (; i < len; i++)
	{
		result[k++] = arr[i];
	}
	for (; j < len2; j++)
	{
		result[k++] = arr2[j];
	}
}


int main(){


}