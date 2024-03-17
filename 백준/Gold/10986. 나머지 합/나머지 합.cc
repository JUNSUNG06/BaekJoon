#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m, cnt = 0;
    vector<long long> add;
    vector<long long> remainCount;

    cin >> n >> m;

    add.resize(n + 1, 0);
    remainCount.resize(m, 0);
    add[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        long long num;
        cin >> num;
        add[i] = add[i - 1] + num;
        remainCount[add[i] % m]++;
    }

    for (int i = 0; i < m; i++)
    {
        cnt += (remainCount[i] * (remainCount[i] - 1)) / 2;
    }
    cnt += remainCount[0];

    cout << cnt;
}