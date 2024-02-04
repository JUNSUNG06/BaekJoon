#include<iostream>
#include<cmath>
using namespace std;

bool IsPrime(long long int n)
{
    if(n <= 1)
        return false;
    
    if(n <= 3)
        return true;
    
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return false;
    }
    
    return true;
}

int main()
{
    long long int N, n;
    
    cin >> n;
    
    for(long long int i = 0; i < n; i++)
    {
        cin >> N;
        
        while(!IsPrime(N))
        {
            N++;
        }
        
        cout << N << endl; 
    }
}