#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> cups;
    int m, x, y, temp;

    cups[1] = 1;
    cups[2] = 2;
    cups[3] = 3;

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;

        temp = cups[y];
        cups[y] = cups[x];
        cups[x] = temp;
    }

    for (auto iter : cups)
    {
        if (iter.second == 1)
        {
            cout << iter.first;
            break;
        }
    }
}