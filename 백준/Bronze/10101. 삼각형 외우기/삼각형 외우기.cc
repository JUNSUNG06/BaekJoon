#include<iostream>
using namespace std;

int main()
{
    int a, b, c, same = 0;
    
    cin >> a >> b >> c;
    
    if((a + b + c) != 180)
    {
        cout << "Error";
        return 0;
    }
    
    if(a == b)
        same++;
    if(a == c)
        same++;
    if(b == c)
        same++;
    
    if(same == 3)
        cout << "Equilateral";
    else if(same == 1)
        cout << "Isosceles";
    else
        cout << "Scalene";
}