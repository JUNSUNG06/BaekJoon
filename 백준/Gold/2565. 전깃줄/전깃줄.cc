#include <iostream>
#include <algorithm>
using namespace std;

int arr[500], dp[100], cnt;
pair<int, int> wire[100];

int solution()
{
	sort(wire, wire + cnt);

	for (int i = 0; i < cnt; i++)
	{
		int maxCnt = 0;

		for (int j = 0; j < i; j++)
		{
			if (wire[i].second > wire[j].second)
				maxCnt = max(maxCnt, dp[j]);
		}

		dp[i] = maxCnt + 1;
	}

	int maxCnt = 0;

	for (int i = 0; i < cnt; i++)
		maxCnt = max(maxCnt, dp[i]);

	return cnt - maxCnt;
}

int main()
{
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> wire[i].first >> wire[i].second;
	}

	cout << solution();
}