#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, cnt = 0;
    string str;
    
    cin >> n;
    
    for(int i = 666; i < 100000000; i++)
    {
        str = to_string(i);
        
        if(str.find("666") != string::npos)
        {
            cnt++;
            
            if(cnt == n)
            {
                cout << i;
                break;
            }
        }
    }
}