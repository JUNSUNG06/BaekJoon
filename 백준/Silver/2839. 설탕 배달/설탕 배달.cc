#include<iostream>
using namespace std;

int main()
{
    int n, min = 10000, cnt;
    
    cin >> n;
    
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 2000; j++)
        {
            if(3 * i + 5 * j == n)
            {
                cnt = i + j;
                
                if(min > cnt)
                    min = cnt;
            }
        }
    }
    
    if(min == 10000)
        cout << -1;
    else
        cout << min;
    
    return 0;
}