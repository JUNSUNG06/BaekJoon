#include<iostream>
#include<algorithm>
using namespace std;

int n, m, num;
int* arr;

bool Search(int value)
{
    int left = 0, right = n - 1, mid = right / 2;

    while (left <= right)
    {
        if (value > arr[mid])
            left = mid + 1;
        else if (value < arr[mid])
            right = mid - 1;
        else
            return true;

        mid = (left + right) / 2;
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> num;

        if (Search(num))
            cout << 1;
        else
            cout << 0;

        cout << '\n';
    }
}