#include<iostream>
using namespace std;

int main()
{
	int v = 0, n;
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] > v)
		{
			v = arr[i];
			n = i + 1;
		}
	}

	cout << v << endl << n;
}