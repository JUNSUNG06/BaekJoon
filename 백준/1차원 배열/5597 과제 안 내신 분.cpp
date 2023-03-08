#include<iostream>
using namespace std;

int main()
{
	bool isCheck[30];
	int s;

	for (int i = 0; i < 30; i++)
	{
		isCheck[i] = true;
	}

	for (int i = 0; i < 28; i++)
	{
		cin >> s;

		isCheck[s - 1] = false;
	}

	for (int i = 0; i < 30; i++)
	{
		if (isCheck[i] == true)
			cout << i + 1 << endl;
	}
}