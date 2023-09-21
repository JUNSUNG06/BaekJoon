#include <iostream>
using namespace std;

int main() 
{
    int x, n = 1, p, c;
    
    cin >> x;
    
    while(x > n)
    {
        x -= n;
        n++;
    }
    
    if(n % 2 == 0)
    {
        p = n - (x - 1);
        c = x;
    }
    else
    {
        p = x;
        c = n - (x - 1);
    }
    
    cout << c << "/" << p;
}