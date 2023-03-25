#include<iostream>
using namespace std;

int main()
{
	int size, n, begin, end, mid;
	int* arr;
	int* arr2;

	cin >> size >> n;

	arr = new int[size];
	arr2 = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
		arr2[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> begin >> end >> mid;
		begin--;
		end--;
		mid--;

		for (int j = 0; j < end - mid + 1; j++)
		{
			arr2[j] = arr[mid + j];
		}

		for (int j = 0; j < mid - begin; j++)
		{
			arr2[end - mid + 1 + j] = arr[begin + j];
		}

		for (int j = 0; j < end - begin + 1; j++)
		{
			arr[begin + j] = arr2[j];
		}
	}

	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << ' ';
	}
}