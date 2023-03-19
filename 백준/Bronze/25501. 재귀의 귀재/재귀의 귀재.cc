#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

int cnt = 0;

int recursion(const char* s, int l, int r) {
    cnt++;

    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    int n;
    string* str;

    cin >> n;
    str = new string[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << isPalindrome(str[i].c_str()) << ' ';
        cout << cnt << endl;

        cnt = 0;
    }
}