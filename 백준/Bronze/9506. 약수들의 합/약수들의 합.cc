#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, sum = 0;
	string str;

	while (true)
	{
		cin >> n;

		if (n == -1)
			break;

		sum = 0;
		str = to_string(n) + " = ";

		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				str += to_string(i) + " + ";
			}
		}

		if (n != sum)
			str = to_string(n) + " is NOT perfect.";
		else
			str.erase(str.size() - 3, str.size() - 1);

		cout << str << endl;
	}
}