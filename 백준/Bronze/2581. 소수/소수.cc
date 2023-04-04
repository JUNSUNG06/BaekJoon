#include<iostream>
using namespace std;

int main()
{
	int m, n, min = 0, sum = 0;
	bool CheckMin = false;

	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		int cnt = 0;

		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				cnt++;
		}

		if (cnt == 2)
		{
			sum += i;
			
			if (CheckMin == false)
			{
				min = i;
				CheckMin = true;
			}
		}
	}

	if (sum != 0)
		cout << sum << endl << min;
	else cout << -1;
}