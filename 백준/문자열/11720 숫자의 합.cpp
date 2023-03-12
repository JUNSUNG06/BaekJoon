#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    string numbers;

    cin >> n >> numbers;

    for (int i = 0; i < n; i++)
    {
        sum += (int)numbers[i] - 48;
    }

    cout << sum;
}