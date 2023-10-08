#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> board;

int GetChangeCount(int startX, int startY)
{
	char ch_1 = 'W', ch_2 = 'B';
	int cnt_1 = 0, cnt_2 = 0;

	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			if (ch_1 != board[y + startY][x + startX])
				cnt_1++;
			if (ch_2 != board[y + startY][x + startX])
				cnt_2++;

			if (x < 7)
			{
				ch_1 = ch_1 == 'W' ? 'B' : 'W';
				ch_2 = ch_2 == 'W' ? 'B' : 'W';
			}
		}
	}

	return cnt_1 < cnt_2 ? cnt_1 : cnt_2;
}

int main()
{
	int sizeX, sizeY, cnt, minCnt = 10000;

	cin >> sizeY >> sizeX;

	board.resize(sizeY, "");


	for (int i = 0; i < sizeY; i++)
		cin >> board[i];

	for (int y = 0; y <= sizeY - 8; y++)
	{
		for (int x = 0; x <= sizeX - 8; x++)
		{
			cnt = GetChangeCount(x, y);

			if (minCnt > cnt)
				minCnt = cnt;
		}
	}

	cout << minCnt;
}