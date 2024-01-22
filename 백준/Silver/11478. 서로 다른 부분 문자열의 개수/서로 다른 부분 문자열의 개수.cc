#include<unordered_set>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    unordered_set<string> s;
    string str;
    
    cin >> str;
    
    for(int i = 0; i < str.size(); i++)
    {
        for(int j = 0; j < str.size(); j++)
        {
            if(i + j > str.size())
                continue;
            
            s.insert(str.substr(i, j));
        }
    }
    
    cout << s.size();
}