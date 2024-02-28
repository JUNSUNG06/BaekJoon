#include<iostream>
#include<cmath>
using namespace std;

int* board;
int n, cnt;

bool canSetting(int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		if (board[i] == col || (row - i == abs(col - board[i])))
			return false;
	}

	return true;
}

void backtracking(int row)
{
	if (row == n)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (canSetting(row, i))
		{
			board[row] = i;
			backtracking(row + 1);
		}
	}
}

int main()
{
	cnt = 0;
	cin >> n;
	board = new int[n];

	backtracking(0);

	cout << cnt;
}