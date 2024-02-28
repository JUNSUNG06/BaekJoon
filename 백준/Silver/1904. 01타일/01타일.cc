#include<iostream>
using namespace std;

int arr[1000001] = {0, 1, 2};

int dp(int n)
{
	for (int i = 3; i <= n; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
	}

	return arr[n];
}

int main()
{
	int n;

	cin >> n;

	cout << dp(n);
}