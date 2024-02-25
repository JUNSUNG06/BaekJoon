#include<vector>
#include<iostream>
using namespace std;

void backtracking(int n, int m, int depth, vector<int> seq, vector<bool> visited)
{
    if (depth == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << seq[i] << ' ';
        }

        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            seq[depth] = i;
            backtracking(n, m, depth + 1, seq, visited);
            visited[i] = false;
        }
    }
}

int main()
{
    int n, m;
    vector<int> seq;
    vector<bool> visited;

    cin >> n >> m;

    seq.resize(m, 0);
    visited.resize(n + 1, false);

    backtracking(n, m, 0, seq, visited);
}