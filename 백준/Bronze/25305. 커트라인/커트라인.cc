#include<iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 1; i++)
	{
		int maxIdx = i, temp;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[maxIdx] < arr[j])
			{
				maxIdx = j;
			}
		}

		if (i != maxIdx)
		{
			temp = arr[i];
			arr[i] = arr[maxIdx];
			arr[maxIdx] = temp;
		}
	}

	cout << arr[k - 1];
}