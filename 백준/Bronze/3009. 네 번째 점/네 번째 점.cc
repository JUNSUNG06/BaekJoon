#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> xMap, yMap;
    int x, y;
    
    for(int i = 0; i < 3; i++)
    {
        cin >> x >> y;
        
        if(xMap.find(x) == xMap.end())
            xMap.insert({x, 1});
        else
            xMap[x]++;
        
        if(yMap.find(y) == yMap.end())
            yMap.insert({y, 1});
        else
            yMap[y]++;
    }
    
    for(auto value : xMap)
    {
        if(value.second == 1)
            x = value.first;
    }
    
    for(auto value : yMap)
    {
        if(value.second == 1)
            y = value.first;
    }
    
    cout << x << ' ' << y;
}