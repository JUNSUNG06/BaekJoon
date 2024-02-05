#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    int start, end, root;
    vector<bool> isPrimes;

    cin >> start >> end;

    isPrimes.resize(end + 1, true);
    root = sqrt(end);

    for (int i = 2; i <= root; i++)
    {
        if (isPrimes[i])
        {
            for (int j = i * 2; j <= end; j += i)
            {
                isPrimes[j] = false;
            }
        }
    }

    isPrimes[0] = false;
    isPrimes[1] = false;

    for (int i = start; i <= end; i++)
    {
        if (isPrimes[i])
            cout << i << '\n';
    }
}