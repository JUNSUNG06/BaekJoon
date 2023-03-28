#include<iostream>
using namespace std;

int main()
{
	int n, k, _n = 0, cnt = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cnt++;

			if (cnt == k)
			{
				_n = i;
				break;
			}
		}
	}

	cout << _n;
}