#include<iostream>
using namespace std;

int main()
{
    int arr[26], cnt = 0;
    string str;
    char mostChar = 0;
    bool isReduplication = false;

    cin >> str;
    for (int i = 0; i < 26; i++)
        arr[i] = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] < 91)
        {
            arr[str[i] - 65]++;
        }
        else
        {
            arr[str[i] - 97]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > cnt)
        {
            mostChar = i;
            cnt = arr[i];
            isReduplication = false;
        }
        else if (arr[i] == cnt)
        {
            isReduplication = true;
        }
    }

    if (isReduplication)
        cout << '?';
    else
    {
        mostChar += 65;
        cout << mostChar;
    }
}