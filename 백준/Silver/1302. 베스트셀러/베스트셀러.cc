#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> map;
    int n, mostSellCount = 0;
    string bookName, mostSellBook;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> bookName;
        
        if(map.find(bookName) == map.end())
        {
            map.insert(make_pair(bookName, 1));
        }
        else
        {
            map[bookName]++;
        }
    }
    
    for(auto iter = map.begin(); iter != map.end(); iter++)
    {
        if(iter->second > mostSellCount)
        {
            mostSellCount = iter->second;
            mostSellBook = iter->first;
        }
    }
    
    cout << mostSellBook;
}