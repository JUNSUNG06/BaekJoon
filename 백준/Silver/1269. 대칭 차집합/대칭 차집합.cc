#include<unordered_set>
#include<iostream>
using namespace std;

int main()
{
    int n, n1, n2, cnt = 0;
    unordered_set<int> a, b;
    
    cin >> n1 >> n2;
    
    for(int i = 0; i < n1; i++)
    {
        cin >> n;
        a.insert(n);
    }
    for(int i = 0; i < n2; i++)
    {
        cin >> n;
        b.insert(n);
    }
    
    for(int value : a)
    {
        if(b.find(value) == b.end())
            cnt++;
    }
    
    for(int value : b)
    {
        if(a.find(value) == a.end())
            cnt++;
    }
    
    cout << cnt;
}