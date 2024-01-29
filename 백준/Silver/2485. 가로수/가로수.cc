#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int getGreatestCommon(long long int a, long long int b)
{
    long long int div, remain, temp;

    div = max(a, b);
    remain = min(a, b);

    while (true)
    {
        if (remain == 0)
            break;

        temp = remain;

        remain = div % remain;
        div = temp;

    }

    return div;
}

int main()
{
    int n, num, result = 0, gcd = 0;
    vector<int> nums, dists;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        nums.push_back(num);

        if (i > 0)
            dists.push_back(nums[i] - nums[i - 1]);
    }

    for (int i = 0; i < dists.size(); i++)
    {
        gcd = getGreatestCommon(gcd, dists[i]);
    }

    for (int i = 0; i < dists.size(); i++)
    {
        result += (dists[i] / gcd) - 1;
    }

    cout << result;
}