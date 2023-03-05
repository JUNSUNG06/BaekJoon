#include<iostream>
using namespace std;

int main()
{
    int a, b;
    
    cin >> a;
    b = a / 10;
    
    if(b == 10 || b == 9)
        cout << "A" << endl;
    else if(b == 8)
        cout << "B" << endl;
    else if(b == 7)
        cout << "C" << endl;
    else if(b == 6)
        cout << "D" << endl;
    else 
        cout << "F" << endl;
}