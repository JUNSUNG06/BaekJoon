#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string out, str[5];

	for (int i = 0; i < 5; i++)
		cin >> str[i];

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (str[j].size() - 1 < i)
				continue;

			out.push_back(str[j][i]);
		}
	}

	cout << out;
}