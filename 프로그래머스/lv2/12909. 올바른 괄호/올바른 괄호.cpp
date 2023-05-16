#include<string>
#include <iostream>
#include<stack>

using namespace std;

bool solution(string s)
{
    stack<char> st;
    bool answer = true;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
            st.push(s[i]);
        
        if(s[i] == ')')
        {
            if(st.empty())
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    
    if(st.size() == 0)
        answer = true;
    else
        answer = false;

    return answer;
}