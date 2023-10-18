#include<iostream>
using namespace std;

int main()
{
	int min, commonMin = 1, a, b, n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		min = a > b ? b : a;
		commonMin = 1; 

		for (int j = min; j > 1; j--)
		{
			if (a % j == 0 && b % j == 0)
			{
				commonMin = j;
				break;
			}
		}

		cout << a * b / commonMin << endl;
	}
}