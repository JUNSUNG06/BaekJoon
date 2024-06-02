#include<iostream>
using namespace std;

int arr[1001], dp[1001], n;

int solution()
{
	int maxNum = 0;

	for (int i = 1; i <= n; i++)
	{
		maxNum = 0;

		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				maxNum = max(maxNum, dp[j]);
			}
		}

		dp[i] = maxNum + 1;
	}

	for (int i = 1; i <= n; i++)
		maxNum = max(maxNum, dp[i]);

	return maxNum;
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	cout << solution();
}