#include<iostream>
#include<algorithm>
using namespace std;

int getGreatestCommon(long long int a, long long int b)
{
    long long int div, remain, temp;

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

    return div;
}

int main()
{
    long long int a1, a2, b1, b2, greatestCommon, child, parent;

    cin >> a1 >> b1 >> a2 >> b2;

    child = (a1 * b2) + (a2 * b1);
    parent = b1 * b2;
    
    greatestCommon = getGreatestCommon(child, parent);
    
    cout << child / greatestCommon << ' ' << parent / greatestCommon;
}