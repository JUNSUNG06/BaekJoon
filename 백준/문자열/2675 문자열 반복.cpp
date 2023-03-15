#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	string* strs;
	int testNumber, n;

	cin >> testNumber;
	strs = new string[testNumber];

	for (int i = 0; i < testNumber; i++)
	{
		cin >> n >> str;

		for (int j = 0; j < str.size(); j++)
		{
			for (int k = 0; k < n; k++)
			{
				strs[i] += str[j];
			}
		}
	}

	for (int i = 0; i < testNumber; i++)
	{
		cout << strs[i];
	}
}