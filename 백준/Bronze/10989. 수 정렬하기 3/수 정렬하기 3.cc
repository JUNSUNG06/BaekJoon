#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n, max = 0, num, arr[10001] = {};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        for (int j = 0; j < arr[i]; j++)
            cout << i << '\n';
    }
}