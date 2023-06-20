#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    unordered_set<int> sanggeuns_set;
    int n, m;
    int value;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> value;
        
        sanggeuns_set.insert(value);
    }
    
    cin >> m;
    
    for(int i = 0; i < m; i++)
    {
        cin >> value;
        
        if(sanggeuns_set.find(value) != sanggeuns_set.end())
        {
            cout << 1 << ' ';
        }
        else
        {
            cout << 0 << ' ';
        }
    }
}