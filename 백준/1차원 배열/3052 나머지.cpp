#include<iostream>
using namespace std;

int main()
{
	int arr[10], cnt = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] %= 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i != j && arr[i] == arr[j])
			{
				arr[j] = -1;
				continue;
			}
		}
	}


	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != -1)
		{
			cnt++;
		}
	}

	cout << cnt;

	//#include<iostream>
	//#include<unordered_set>
	//using namespace std;
	//
	//int main()
	//{
	//	unordered_set<int> numbers;
	//	int n;
	//
	//	for (int i = 0; i < 10; i++)
	//	{
	//		cin >> n;
	//		numbers.insert(n % 42);
	//	}
	//
	//	cout << numbers.size();
	//}unordered_setunordered_set
}