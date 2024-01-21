#include<string>
#include<unordered_set>
#include<iostream>
using namespace std;

int main()
{
    unordered_set<string> s;
    string str;
    int n, m, cnt = 0;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        s.insert(str);
    }
    
    for(int i = 0; i < m; i++)
    {
        cin >> str;
        
        if(s.find(str) != s.end())
            cnt++;
    }
    
    cout << cnt;
}