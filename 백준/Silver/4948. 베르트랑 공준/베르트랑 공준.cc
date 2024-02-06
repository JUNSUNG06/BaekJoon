#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int GetPrimeNum(int start, int end, int root)
{
    if (start == 1)
        return 1;

    int cnt = 0;
    vector<bool> isPrimes;

    isPrimes.resize(end + 1, true);

    for (int i = 2; i <= root; i++)
    {
        if (isPrimes[i])
        {
            for (int j = i * 2; j <= end; j += i)
                isPrimes[j] = false;
        }
    }

    for (int i = start + 1; i <= end; i++)
    {
        if (isPrimes[i])
            cnt++;
    }

    return cnt;
}

int main()
{
    int n;

    do
    {
        cin >> n;

        if (n != 0)
            cout << GetPrimeNum(n, n * 2, sqrt(n * 2)) << '\n';
    } while (n != 0);
}