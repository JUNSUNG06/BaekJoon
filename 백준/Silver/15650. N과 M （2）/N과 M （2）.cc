#include<iostream>
#include<vector>
using namespace std;

void backtracking(int n, int m, int depth, vector<int> vec, vector<bool> visited)
{
    if (depth == m)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << ' ';
        }

        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if ((depth == 0) || (depth != 0 && i > vec[depth - 1]))
            {
                visited[i] = true;
                vec[depth] = i;
                backtracking(n, m, depth + 1, vec, visited);
                visited[i] = false;
            }
        }
    }
}

int main()
{
    vector<int> vec;
    vector<bool> visited;
    int n, m;

    cin >> n >> m;

    vec.resize(m, 0);
    visited.resize(n + 1, 0);

    backtracking(n, m, 0, vec, visited);
}