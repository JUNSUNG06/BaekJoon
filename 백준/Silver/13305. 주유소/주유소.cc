#include<iostream>
using namespace std;

int main()
{
    int n;
    int* road;
    int* price;
    int currentPrice = 0, roadLength = 0, result = 0;
    cin >> n;
    road = new int[n - 1];
    price = new int[n];

    for (int i = 0; i < n - 1; i++)
        cin >> road[i];
    for (int i = 0; i < n; i++)
        cin >> price[i];

    currentPrice = price[0];
    for (int i = 0; i < n - 1; i++)
    {
        roadLength += road[i];

        if (price[i + 1] < currentPrice)
        {
            result += roadLength * currentPrice;
            currentPrice = price[i + 1];
            roadLength = 0;
        }
    }
    result += roadLength * currentPrice;

    cout << result;
}