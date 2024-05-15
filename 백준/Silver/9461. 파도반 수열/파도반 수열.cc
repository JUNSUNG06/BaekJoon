#include <iostream>
using namespace std;

long long arr[101] = { 0, 1, 1, 1, 2, 2 };

long long solution(int n)
{
    if (n <= 0) return 0;

    if (arr[n] == 0)
        arr[n] = solution(n - 1) + solution(n - 5);

    return arr[n];
}

int main()
{
    int tc, n;

    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        cin >> n;

        cout << solution(n) << '\n';
    }
}