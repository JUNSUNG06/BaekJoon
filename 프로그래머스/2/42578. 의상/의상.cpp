#include <string>
#include <vector>
#include<unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    unordered_map<string, int> m;

    for (int i = 0; i < clothes.size(); i++)
    {
        if (m.find(clothes[i][1]) == m.end())
        {
            m.insert(make_pair(clothes[i][1], 2));
        }
        else
        {
            m[clothes[i][1]]++;
        }
    }

    if (m.size() != 0)
    {
        answer = 1;

        for (auto iter = m.begin(); iter != m.end(); iter++)
        {
            answer *= iter->second;
        }

        answer--;
    }


    return answer;
}

int main()
{
    solution({{"yellow_hat", "headgear"}, { "blue_sunglasses", "eyewear" }, { "green_turban", "headgear" }});
}