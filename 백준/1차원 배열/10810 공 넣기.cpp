#include<iostream>
using namespace std;

int main()
{
	int n, m;
	
	cin >> n >> m;
	int* arr = new int[n];

	for (int i = 0; i < m; i++)
	{
		int begin, end, number;

		cin >> begin >> end >> number;

		for (int j = begin - 1; j < end; j++)
		{
			arr[j] = number;
		}	
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}