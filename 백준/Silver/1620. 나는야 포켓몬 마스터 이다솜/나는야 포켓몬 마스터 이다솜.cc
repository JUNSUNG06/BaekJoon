#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    unordered_map<int, string> iMap;
    unordered_map<string, int> sMap;
    int n, m;
    string str;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        iMap.insert(make_pair(i + 1, str));
        sMap.insert(make_pair(str, i + 1));
    }

    for (int i = 0; i < m; i++)
    {
        cin >> str;

        if (sMap.find(str) != sMap.end())
        {
            cout << sMap[str] << '\n';
            continue;
        }
        
        cout << iMap[stoi(str)] << '\n';
    }
}