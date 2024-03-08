#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int testCase, input, maxSum = 0;
vector<int> sum, nums;

void dp(int depth)
{
    if (depth == testCase)
        return;

    sum[depth] = max(sum[depth - 1] + nums[depth], nums[depth]);

    maxSum = max(maxSum, sum[depth]);

    dp(depth + 1);
}

int main()
{
    cin >> testCase;

    sum.resize(testCase, 0);

    for (int i = 0; i < testCase; i++)
    {
        cin >> input;
        nums.push_back(input);
    }

    sum[0] = nums[0];
    maxSum = sum[0];
    dp(1);

    cout << maxSum;
}