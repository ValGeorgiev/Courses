#include <iostream>
#include <stdlib.h>
#include <queue>
#include <time.h>
using namespace std;

void game(queue<int> pl){
	while (pl.size() != 1)
	{
		int r = rand();
		for (int i = 0; i < r; i++)
		{
			pl.push(pl.front());
			pl.pop();
		}
		pl.pop();
	}
	cout << "Winner : " << pl.front() << endl;

}
//
//int main(){
//	queue<int> pl;
//	srand(time(NULL));
//	pl.push(1);
//	pl.push(2);
//	pl.push(3);
//	pl.push(4);
//	pl.push(5);
//	game(pl);
//}