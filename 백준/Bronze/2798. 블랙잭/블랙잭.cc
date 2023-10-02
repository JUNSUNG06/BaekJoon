#include<iostream>
using namespace std;

int main()
{
    int n, m, sum, near = 0;
    int* cards;
    
    cin >> n >> m;
    cards = new int[n];
    for(int i = 0; i < n; i++)
        cin >> cards[i];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == i) 
                continue;
            
            for(int k = 0; k < n; k++)
            {
                if(k == i || k == j) 
                    continue;
                
                sum = cards[i] + cards[j] + cards[k];
                
                if(sum > near && sum <= m)
                    near = sum;
            }
        }
    }
    
    cout << near;
}