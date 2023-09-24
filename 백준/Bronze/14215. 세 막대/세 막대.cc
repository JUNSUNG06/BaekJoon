#include <iostream>
using namespace std;

int main()
{
    int a, b, c, longest, sum;
    
    cin >> a >> b >> c;
    
    longest = a > b ? a > c ? a : c : b > c ? b : c;
    sum = a + b + c - longest;
    
    if(longest >= sum)
    {
        if(a == b && a == c)
            cout << a + b + c;
        else
            cout << sum + sum - 1;
    }
    else
        cout << a + b + c;
    
    return 0;
}