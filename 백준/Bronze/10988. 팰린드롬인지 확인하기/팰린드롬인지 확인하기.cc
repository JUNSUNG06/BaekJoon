#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    string word;
    int n;

    cin >> word;
    n = floor(word.size() / 2);

    for (int i = 0; i < n; i++)
    {
        if (word[0 + i] != word[word.size() - 1 - i])
        {
            cout << 0;
            return 0;
        }
    }

    cout << 1;
}