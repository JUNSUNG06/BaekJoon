#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int cost[10001], maxCost[10001], n;

void solution()
{
	maxCost[1] = cost[1];
	maxCost[2] = cost[1] + cost[2];

	for (int i = 3; i <= n; i++)
	{
		maxCost[i] = max(maxCost[i - 2], maxCost[i - 3] + cost[i - 1]) + cost[i];
		maxCost[i] = max(maxCost[i - 1], maxCost[i]);
	}
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int num;

		cin >> num;

		cost[i] = num;
	}

	solution();

	cout << maxCost[n];
}