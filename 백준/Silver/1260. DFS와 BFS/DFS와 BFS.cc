#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int N, M, V;
vector<vector<int>> map;
vector<int> visited;
queue<int> que;

void DFS(int n)
{
    visited[n] = 1;
    cout << n << ' ';

    for (int i = 1; i <= N; i++)
    {
        if (map[n][i] == 1 && visited[i] != 1)
            DFS(i);
    }
}

void BFS(int n)
{
    int value;
    que.push(n);
    cout << n;
    visited[n] = 1;

    while (!que.empty())
    {
        value = que.front();
        que.pop();

        for (int i = 1; i <= N; i++)
        {
            if (map[value][i] == 1 && visited[i] == 0)
            {
                que.push(i);
                cout << ' ' << i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    cin >> N >> M >> V;
    map.resize(N + 1, vector<int>(N + 1, 0));
    visited.resize(N + 1, 0);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;

        map[a][b] = 1;
        map[b][a] = 1;
    }

    DFS(V);

    cout << endl;
    visited.clear();
    visited.resize(N + 1, 0);

    BFS(V);
}