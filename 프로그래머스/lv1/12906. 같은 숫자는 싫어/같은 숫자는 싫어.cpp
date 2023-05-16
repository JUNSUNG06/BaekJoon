#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue<int> q;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(q.empty())
        {
            q.push(arr[i]);
            continue;
        }
            
        
        if(q.back() != arr[i])
        {
            q.push(arr[i]);
        }
    }
    
    int size = q.size();
    
    for(int i = 0; i < size; i++)
    {
        answer.push_back(q.front());
        q.pop();
    }
        

    return answer;
}