#include<string>
#include<map>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int n, age;
    string name;
    map<int, vector<string>> member;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> age >> name;

        if (member.find(age) == member.end())
            member.insert({ age, {} });

        member[age].push_back(name);
    }

    for (auto pair : member)
    {
        for (auto mems : pair.second)
        {
            cout << pair.first << ' ' << mems << '\n';
        }
    }
}