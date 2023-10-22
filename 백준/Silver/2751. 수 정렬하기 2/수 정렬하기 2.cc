#include<iostream>
using namespace std;

int* arr;
int *temp;

void merge(int left, int right)
{
	if (left >= right)
		return;

	int mid = (left + right) / 2;
	int l = left;
	int r = mid + 1;
	int idx = left;

	merge(l, mid);
	merge(r, right);

	while (l <= mid && r <= right)
	{
		if (arr[l] < arr[r])
			temp[idx++] = arr[l++];
		else
			temp[idx++] = arr[r++];
	}

	while (l <= mid)
		temp[idx++] = arr[l++];

	while (r <= right)
		temp[idx++] = arr[r++];

	for (int i = left; i <= right; i++)
		arr[i] = temp[i];
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, v;
	cin >> n;

	arr = new int[n];
	temp = new int[n];

	for(int i = 0; i < n; i++)
	{
		cin >> v;
		arr[i] = v;
	}

	merge(0, n - 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << '\n';
}