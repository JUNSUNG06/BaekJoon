#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str;
    stack<char> stk;

    getline(cin, str);
    while (str[0] != '.')
    {
        bool isNotMatched = false;

        for (int i = 0; i < str.size(); i++)
        {
            switch (str[i])
            {
            case '(':
            case '[':
                stk.push(str[i]);
                break;
            case ')':
                if (stk.empty())
                    isNotMatched = true;
                else if(stk.top() != '(')
                    isNotMatched = true;
                else
                    stk.pop();
                break;
            case ']':
                if (stk.empty())
                    isNotMatched = true;
                else if(stk.top() != '[')
                    isNotMatched = true;
                else
                    stk.pop();
                break;
            }

            if (isNotMatched)
                break;
        }

        if (!isNotMatched && stk.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';

        getline(cin, str);
        while (!stk.empty())
            stk.pop();
    }
}