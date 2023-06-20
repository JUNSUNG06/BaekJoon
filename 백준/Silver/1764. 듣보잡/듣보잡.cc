#include <set>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    set<string> d, b;
    string name;
    int n, m;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        d.insert(name);
    }
    
    for(int i = 0; i < m; i++)
    {
        cin >> name;
        
        if(d.find(name) != d.end())
        {
            b.insert(name);
        }
    }
    
    cout << b.size() <<endl;
    
    for(auto iter = b.begin(); iter != b.end(); iter++)
    {
        cout << *iter << endl;
    }
}