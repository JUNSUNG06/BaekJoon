#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int compare(string a, string b)
{
    if (a.size() == b.size())
    {
        return max(b.compare(a), 0);
    }
    else
    {
        return a.size() < b.size();
    }
}

int main()
{
    vector<string> vec;
    string str;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        if(find(vec.begin(), vec.end(), str) == vec.end())
            vec.push_back(str);
    }

    sort(vec.begin(), vec.end(), compare);
    
    for (string s : vec)
    {
        if (s.empty()) return 0;

        cout << s << '\n';
    }
}