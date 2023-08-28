#include<iostream>
using namespace std;

int main()
{
    int x, y, w, h, tx, ty;
    
    cin >> x >> y >> w >> h;
    
    tx = w - x > x ? x : w - x;
    ty = h - y > y ? y : h - y;
    
    if(tx > ty)
        cout << ty;
    else
        cout << tx;
}