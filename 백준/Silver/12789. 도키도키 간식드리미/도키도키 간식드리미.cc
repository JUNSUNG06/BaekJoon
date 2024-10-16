#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> stk;
	int* students;
	int n, currentNum = 1, currentIdx = 0;

	cin >> n;
	students = new int[n];
	for (int i = 0; i < n; i++)
		cin >> students[i];

	while (true)
	{
		for (currentIdx; currentIdx < n;)
		{
			if (students[currentIdx] == currentNum)
			{
				students[currentIdx] = 0;
				currentNum++;
				currentIdx++;
				break;
			}
			else
			{
				stk.push(students[currentIdx]);
				students[currentIdx] = 0;
				currentIdx++;
			}
		}

		if (!stk.empty())
		{
			while (true)
			{
				if (stk.empty() || stk.top() != currentNum)
					break;

				stk.pop();
				currentNum++;
			}
		}
		
		if (students[n - 1] == 0)
			break;
	}

	if (stk.empty())
		cout << "Nice";
	else
		cout << "Sad";
}