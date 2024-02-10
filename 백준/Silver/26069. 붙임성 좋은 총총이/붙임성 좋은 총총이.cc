#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<string> s;
    string name1, name2;
    int n;
    
    cin >> n;
    
    s.insert("ChongChong");
    
    for(int i = 0; i < n; i++)
    {
        cin >> name1 >> name2;
        
        if(s.find(name1) != s.end() || s.find(name2) != s.end())
        {
            s.insert(name1);
            s.insert(name2);
        }
    }
    
    cout << s.size();
}