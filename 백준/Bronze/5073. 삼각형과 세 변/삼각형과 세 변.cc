#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;

    while (true)
    {
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        max = a;
        if (max < b) max = b;
        if (max < c) max = c;
        if (a + b + c - max <= max)
        {
            cout << "Invalid" << endl;
            continue;
        }

        if (a == b && a == c)
            cout << "Equilateral" << endl;
        else if (a == b || a == c || b == c)
            cout << "Isosceles" << endl;
        else
            cout << "Scalene" << endl;
    }
}