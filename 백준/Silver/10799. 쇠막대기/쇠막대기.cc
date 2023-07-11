#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int raserCount = 0;
	int stickCount = 0;

	int result = 0;

	string obj;
	stack<char> objInfo;
	char beforeChar;
	cin >> obj;

	for (int i = 0; i < obj.size(); i++)
	{
		if (!objInfo.empty())
		{
			beforeChar = obj[i - 1];
		}

		if (obj[i] == '(')
		{
			objInfo.push(obj[i]);
			stickCount++;
			
		}
		else
		{
			if (beforeChar == '(')
			{
				raserCount++;
				stickCount--;
				
				result += stickCount;
			}
			else
			{
				stickCount--;
				result++;
			}

			objInfo.pop();
		}

		if (objInfo.empty())
		{
			raserCount = 0;
			stickCount = 0;
		}
	}

	cout << result;
}