#include<iostream>
#include<vector>
using namespace std;

void backtracking(int n, int m, int depth, vector<int> vec)
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
        if((depth == 0) || (depth != 0 && i >= vec[depth - 1]))
        {
            vec[depth] = i;
            backtracking(n, m, depth + 1, vec);
        }
    }
}

int main()
{
    vector<int> vec;
    int n, m;

    cin >> n >> m;

    vec.resize(m, 0);

    backtracking(n, m, 0, vec);
}