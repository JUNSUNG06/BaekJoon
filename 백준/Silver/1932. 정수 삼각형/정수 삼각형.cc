#include<iostream>
#include<cmath>
using namespace std;

int cost[500][500], maxCost[500][500];
int n, result = 0;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			int num;

			cin >> num;

			cost[i][j] = num;
		}
	}

	maxCost[0][0] = cost[0][0];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if(j == 0)
				maxCost[i][j] = maxCost[i - 1][j] + cost[i][j];
			else if(j == i)
				maxCost[i][j] = maxCost[i - 1][j - 1] + cost[i][j];
			else
				maxCost[i][j] = max(maxCost[i - 1][j - 1] + cost[i][j], maxCost[i - 1][j] + cost[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (result < maxCost[n - 1][i])
			result = maxCost[n - 1][i];
	}

	cout << result;
}