#include<iostream>
using namespace std;

int arr[1002], rightDP[1002], leftDP[1002], DP[1002], n;

int solution()
{
	int rightMax = 0, leftMax = 0, maxDP = 0;

	for (int i = 1; i <= n; i++)
	{
		rightMax = 0;
		leftMax = 0;

		for (int j = 0; j < i; j++)
		{
			if(arr[j] < arr[i])
				rightMax = max(rightMax, rightDP[j]);
			if (arr[n + 1 - j] < arr[n + 1 - i])
				leftMax = max(leftMax, leftDP[n + 1 - j]);
		}

		rightDP[i] = rightMax + 1;
		leftDP[n + 1 - i] = leftMax + 1;
	}

	for (int i = 1; i <= n; i++)
	{
		DP[i] = rightDP[i] + leftDP[i] - 1;

		maxDP = max(maxDP, DP[i]);
	}

	return maxDP;
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	
	cout << solution();
}