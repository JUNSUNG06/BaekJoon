#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (j > i)
                cout << ' ';
            else
                cout << '*';
        }

        for (int k = 0; k < i; k++)
            cout << '*';

        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
                cout << ' ';
            else
                cout << "*";
        }

        for (int k = n - 2; k > i; k--)
            cout << "*";

        cout << endl;
    }
}