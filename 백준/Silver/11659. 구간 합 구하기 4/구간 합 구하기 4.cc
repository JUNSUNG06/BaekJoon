#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vec, add;
    int n, m, num, start, end;

    cin >> n >> m;

    add.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        vec.push_back(num);
        add.push_back(add[i - 1] + num);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> start >> end;
        cout << add[end] - add[start - 1] << '\n';
    }
}