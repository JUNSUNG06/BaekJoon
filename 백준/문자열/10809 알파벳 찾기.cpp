#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    char c;

    cin >> str;

    for (int i = 0; i < 26; i++)
    {
        c = i + 97;

        for (int j = 0; j < str.size(); j++)
        {
            if (c == str[j])
            {
                cout << j << c << ' ';
                break;
            }
            else if (c != str[j] && j == str.size() - 1)
            {
                cout << -1 << c << ' ';
            }
        }
    }
}