#include<iostream>
using namespace std;

int main()
{
	int n, m, begin, end, temp;

	cin >> n >> m;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> begin >> end;

		begin--;
		end--;

		if (begin != end)
		{
			temp = arr[begin];
			arr[begin] = arr[end];
			arr[end] = temp;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}