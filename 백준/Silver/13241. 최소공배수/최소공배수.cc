#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int a, b, div, remain, temp;

    cin >> a >> b;

    div = max(a, b);
    remain = min(a, b);

    while (true)
    {
        temp = remain;
        remain = div % remain;
        div = temp;

        if (remain == 0)
            break;
    }

    cout << a * b / div;
}