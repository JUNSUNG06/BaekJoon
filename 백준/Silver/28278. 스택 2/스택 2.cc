#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> stk;
    int cnt, func, input;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> func;
        switch (func)
        {
        case 1:
            cin >> input;
            stk.push(input);
            break;
        case 2:
            if (stk.empty())
            {
                cout << -1;
            }
            else
            {
                cout << stk.top();
                stk.pop();
            }
            cout << '\n';
            break;
        case 3:
            cout << stk.size();
            cout << '\n';
            break;
        case 4:
            if (stk.empty())
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
            cout << '\n';
            break;
        case 5:
            if (stk.empty())
            {
                cout << -1;
            }
            else
            {
                cout << stk.top();
            }
            cout << '\n';
            break;
        default:
            break;
        }
    }
}