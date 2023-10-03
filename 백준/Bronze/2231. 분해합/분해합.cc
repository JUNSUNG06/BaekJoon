#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, m, k;
    
    cin >> n;
    
    for(int i = 1; i < n; i++)
    {
        m = i;
        k = i;
        
        while(m > 0)
        {
            k += m % 10;
            m /= 10;
        }
        
        if(k == n)
        {
            cout << i;
            return 0;
        }
    }
    
    cout << 0;
    return 0;
}