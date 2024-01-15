#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums, pres;
    int n, x;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        nums.push_back(x);
        pres.push_back(x);
    }

    sort(pres.begin(), pres.end());
    pres.erase(unique(pres.begin(), pres.end()), pres.end());

    for (int i = 0; i < n; i++)
    {
        cout << lower_bound(pres.begin(), pres.end(), nums[i]) - pres.begin() << ' ';
    }
}