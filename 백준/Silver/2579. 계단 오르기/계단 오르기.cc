#include <iostream>
#include <cmath>
using namespace std;

int cost[300], maxCost[300], n;

void solution()
{
	maxCost[0] = cost[0];
	maxCost[1] = cost[0] + cost[1];
	maxCost[2] = max(cost[0], cost[1]) + cost[2];

	for (int i = 3; i < n; i++)
	{
		maxCost[i] = max(cost[i - 1] + maxCost[i - 3], maxCost[i - 2]) + cost[i];
	}
} 

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		cost[i] = num;
	}

	solution();

	cout << maxCost[n - 1];
}