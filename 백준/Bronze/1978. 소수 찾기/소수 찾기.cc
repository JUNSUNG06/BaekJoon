#include<iostream>
using namespace std;

int main()
{
	int n, num, decimalCnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		cin >> num;

		if (num == 1)
			continue;

		for (int j = 1; j <= num; j++)
		{
			if (num % j == 0)
				cnt++;
		}

		if (cnt == 2)
		{
			decimalCnt++;
		}
	}
	
	cout << decimalCnt;
}