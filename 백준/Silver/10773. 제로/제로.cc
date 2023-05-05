#include<stack>
#include<iostream>

using namespace std;

int main()
{
    int testCase, n, sum = 0;
    stack<int> st = stack<int>();

    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        cin >> n;

        if (n + 48 == '0')
        {
            sum -= st.top();
            st.pop();

            continue;
        }

        st.push(n);
        sum += st.top();
    }

    cout << sum;
}