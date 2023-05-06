#include<stack>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int n;
    string s;
    bool isCheck = false;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        stack<char> st = stack<char>();

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '(')
                st.push(s[j]);
            else if (s[j] == ')')
            {
                if (st.empty())
                {
                    cout << "NO" << endl;
                    isCheck = true;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
        }

        if (isCheck)
        {
            isCheck = false;
            continue;
        }

        if (st.size() > 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }

        cout << endl;
    }
}