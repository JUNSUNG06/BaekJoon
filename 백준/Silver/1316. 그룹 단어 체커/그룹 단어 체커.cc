#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool CheckDupl(const string &str)
{
	char beforeChar, currentChar;
	vector<char> duplication;

	for (int i = 0; i < str.size(); i++)
	{
		currentChar = str[i];

		if (i == 0)
		{
			duplication.push_back(currentChar);
			beforeChar = currentChar;
			continue;
		}

		if (currentChar == beforeChar)
		{
			beforeChar = currentChar;
			continue;
		}
		else
		{
			for (int j = 0; j < duplication.size(); j++)
			{
				if (duplication[j] == currentChar)
				{
					return true;
				}
			}

			duplication.push_back(currentChar);
			beforeChar = currentChar;
		}
	}

	return false;
}

int main()
{
	
	int n, cnt = 0;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (!CheckDupl(str))
		{
			cnt++;
		}
	}

	cout << cnt;
}