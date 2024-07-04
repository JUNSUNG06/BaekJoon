#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

int lcs[1001][1001];
string row, col;


int main()
{
	cin >> row >> col;

	for (int i = 1; i <= row.length(); i++)
	{
		for (int j = 1; j <= col.length(); j++)
		{
			lcs[i][j] = (row[i - 1] == col[j - 1]) ? lcs[i - 1][j - 1] + 1 : max(lcs[i][j - 1], lcs[i - 1][j]);
		}
	}

	cout << lcs[row.length()][col.length()];
}