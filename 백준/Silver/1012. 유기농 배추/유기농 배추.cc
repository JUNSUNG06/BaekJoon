#include<iostream>
#include<vector>
using namespace std;

void dfs(int x, int y);

vector<vector<int>> map;
vector<vector<bool>> visited;
int dx[] = { 1, 0, -1 ,0 }, dy[] = { 0, 1, 0, -1 };

int t, m, n, k, cnt;
int main()
{
	cin >> t;

	for (int j = 0; j < t; j++)
	{
		cnt = 0;
		cin >> m >> n >> k;

		map.clear();
		visited.clear();
		map.resize(n, vector<int>(m, 0));
		visited.resize(n, vector<bool>(m, false));

		for (int i = 0; i < k; i++)
		{
			int x, y;

			cin >> x >> y;
			map[y][x] = 1;
		}

		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < m; x++)
			{
				if (map[y][x] == 1 && visited[y][x] == false)
				{
					dfs(x, y);
					cnt++;
				}
			}
		}

		cout << cnt<<"\n";
	}

	return 0;
}

void dfs(int x, int y)
{
	int nx, ny;

	visited[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		nx = x + dx[i];
		ny = y + dy[i];

		if (nx < 0 || nx >= m || ny < 0 || ny >= n)
			continue;

		if (map[ny][nx] == 1 && visited[ny][nx] == false)
		{
			dfs(nx, ny);
		}
	}

	return;
}