#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, min = 1000001, max = 0, num;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        
        min = std::min(min, num);
        max = std::max(max, num);
    }
    
    cout << min * max;
}