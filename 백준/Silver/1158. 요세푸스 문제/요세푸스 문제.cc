#include <iostream>
#include <list>

using namespace std;

int main()
{
	int n, k;
	list<int> circleList;
	list<int>::iterator target;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		circleList.push_back(i);

	target = circleList.begin();

	cout << '<';

	while (n > 0)
	{
		for (int i = 1; i < k; i++)
		{
			target++;
			if (target == circleList.end())
				target = circleList.begin();
		}
		if (n == 1)
		{
			cout << *target;
			break;
		}

		cout << *target << ", ";
		n--;
		target = circleList.erase(target);
		if (target == circleList.end())
			target = circleList.begin();
	}

	cout << '>';
}