#include <iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	stack<char> st;
	int n, count = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		for (int j = 0; j < str.size(); j++)
		{
			if (st.empty())
			{
				st.push(str[j]);
				continue;
			}

			if (str[j] == st.top())
			{
				st.pop();
			}
			else
			{
				st.push(str[j]);
			}

			/*if (st.size() >= 3)
			{
				break;
			}*/
		}

		if (st.size() == 0)
			count++;

		while(!st.empty())
		{
			st.pop();
		}
	}

	cout << count;
}