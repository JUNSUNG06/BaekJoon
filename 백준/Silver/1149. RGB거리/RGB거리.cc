#include<iostream>
#include <cmath>
using namespace std;

int costArr[1000][3], minCostArr[1000][3], n;

void solution()
{
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			minCostArr[i][0] = costArr[i][0];
			minCostArr[i][1] = costArr[i][1];
			minCostArr[i][2] = costArr[i][2];
		}
		else
		{
			minCostArr[i][0] = min(minCostArr[i - 1][1], minCostArr[i - 1][2]) + costArr[i][0];
			minCostArr[i][1] = min(minCostArr[i - 1][0], minCostArr[i - 1][2]) + costArr[i][1];
			minCostArr[i][2] = min(minCostArr[i - 1][0], minCostArr[i - 1][1]) + costArr[i][2];
		}
	}

	cout << min(min(minCostArr[n - 1][0], minCostArr[n - 1][1]), minCostArr[n - 1][2]);
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int cost;

			cin >> cost;
			costArr[i][j] = cost;
		}
	}

	solution();
}