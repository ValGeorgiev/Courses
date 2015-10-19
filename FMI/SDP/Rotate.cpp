#include <iostream>
using namespace std;

void swapIndex(int* arr, int j, int swapInd){
	int tmp = arr[j];
	arr[j] = arr[swapInd];
	arr[swapInd] = tmp;
}

//void rotateArray(int* arr, int len, int index){		// O(index * len)
//	for (int i = 0; i < index; i++)					//memory O(1)
//	{
//		for (int j = 0; j < len; j++)
//		{
//			int swapInd = j - 1;
//			if (swapInd < 0){
//				swapInd = len - 1;
//			}
//			swapIndex(arr, j, swapInd);		
//		}
//	}
//}



//void rotateArray(int* arr, int len, int index){			// time O(n)
//	int i, j, k, tmp;									// pamet O(1)
//	for (int i = 0; i < gcd(len,index); i++)			// gcd namira nai obsht delitel
//	{
//		tmp = arr[i];
//		j = i;
//		while (1){
//			k = j + index;
//			if (k >= len)
//			{
//				k -= len;
//			}
//			if (k == i)
//			{
//				break;
//			}
//			arr[j] = arr[k];
//			j = k;
//		}
//		arr[j] = tmp;
//	}
//}


int main(){
	int arr[5] = { 1, 2, 3, 4, 5 };
	rotateArray(arr, 5, 3);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}