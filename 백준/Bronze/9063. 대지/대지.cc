#include<iostream>
using namespace std;

int main()
{
    int n, x, y;
    int maxX = -100000, minX = 100000, maxY = -100000, minY = 100000;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if(x > maxX) maxX = x;
        if(x < minX) minX = x;
        if(y > maxY) maxY = y;
        if(y < minY) minY = y;
    }
    
    cout << (maxX - minX) * (maxY - minY);
}