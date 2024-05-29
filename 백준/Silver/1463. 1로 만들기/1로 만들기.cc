#include<iostream>
#include <climits>
using namespace std;

int arr[1000001], n;

int main()
{
	cin >> n;

	for(int i = 2; i <= n; i++)
	{
		int minCnt = INT_MAX;

		if (i % 3 == 0) 
			minCnt = min(minCnt, arr[i / 3]);
		if (i % 2 == 0) 
			minCnt = min(minCnt, arr[i / 2]);
		minCnt = min(minCnt, arr[i - 1]);
			
		arr[i] = minCnt + 1;
	}

	cout << arr[n];
}