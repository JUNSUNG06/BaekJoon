#include<set>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    set<string> s;
    string name, action;
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> name >> action;
        
        if(action == "enter")
        {
            s.insert(name);
        }
        else
        {
            s.erase(name);
        }
    }
    
    for(auto iter = s.rbegin(); iter != s.rend(); iter++)
        cout << *iter << '\n';
}