#include<iostream>
#include<vector>
using namespace std;

vector<vector<vector<int>>> vec;

int w(int a, int b, int c)
{
	if (a <= 0 or b <= 0 or c <= 0) return 1;
	if (a > 20 or b > 20 or c > 20) return w(20, 20, 20);

	if (vec[a][b][c] == -1)
	{
		if (a < b && b < c)
			vec[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
		else
			vec[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	}
	
	return vec[a][b][c];
}

int main()
{
	int a, b, c;
	vec = vector<vector<vector<int>>>(21, vector<vector<int>>(21, vector<int>(21, -1)));

	do
	{
		cin >> a >> b >> c;

		if (a == -1 && b == -1 && c == -1)
			break;

		printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
	} while (true);
}