#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;

int Average(vector<int> v)
{
    int sum = 0;
    for (int number : v)
        sum += number;

    return round(sum / (float)v.size());
}

int Mid(vector<int> v)
{
    if (v.size() % 2 == 0)
        return (v[v.size() / 2] + v[v.size() / 2 - 1]) / 2.0f;
    else
        return v[v.size() / 2];
}

int Most(unordered_map<int, int> m)
{
    int cnt = 0, most;
    vector<int> mosts;
    for (auto pair : m)
        cnt = max(cnt, pair.second);

    for (auto pair : m)
    {
        if (pair.second == cnt)
            mosts.push_back(pair.first);
    }

    sort(mosts.begin(), mosts.end());

    if (mosts.size() > 1)
        most = mosts[1];
    else
        most = mosts[0];

    return most;
}

int Range(vector<int> v)
{
    return v[v.size() - 1] - v[0];
}

int main()
{
    vector<int> vec;
    unordered_map<int, int> m;
    int n, num, average, mid, most, range;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);

        if (m.find(num) == m.end())
            m.insert({ num, 1 });
        else
            m[num]++;
    }

    sort(vec.begin(), vec.end());

    average = Average(vec);
    mid = Mid(vec);
    most = Most(m);
    range = Range(vec);

    cout << average << '\n' << mid << '\n' << most << '\n' << range;
}