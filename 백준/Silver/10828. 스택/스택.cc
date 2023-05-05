#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> stack;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string order;
        cin >> order;

        if (order == "push")
        {
            int num;
            cin >> num;
            stack.push(num);
        }
        else if (order == "pop")
        {
            if (stack.size() == 0)
            {
                cout << -1 << endl;
                continue;
            }

            cout << stack.top() << endl;
            stack.pop();

        }
        else if (order == "size")
        {
            cout << stack.size() << endl;
        }
        else if (order == "empty")
        {
            cout << stack.empty() << endl;
        }
        else if (order == "top")
        {
            if (stack.empty())
                cout << -1 << endl;
            else
                cout << stack.top() << endl;
        }
    }
}