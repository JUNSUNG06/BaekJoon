#include<iostream>
using namespace std;

int main()
{
    int n, div = 1;

    cin >> n;

    while (true)
    {
        if (n == 1)
            break;

        div++;

        if (n % div == 0)
        {
            bool isPrime = true;

            for (int i = 2; i < div; i++)
            {
                if (div % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                n /= div;
                cout << div << endl;
                div = 1;
            }
        }
    }
}