#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<string> split(string str, char dlim)
{
    vector<string> result;
    string buffer;
    stringstream stream;
    stream.str(str);

    while (getline(stream, buffer, dlim))
    {
        result.push_back(buffer);
    }

    return result;
}


vector<string> solution(vector<string> record) {
    vector<string> answer;

    unordered_map<string, string> users;

    for (int i = 0; i < record.size(); i++)
    {
        vector<string> log = split(record[i], ' ');

        if (users.find(log[1]) == users.end())
        {
            users.insert(make_pair(log[1], log[2]));
        }
    }

    for (int i = 0; i < record.size(); i++)
    {
        vector<string> log = split(record[i], ' ');

        if (log[0] == "Change" || log[0] == "Enter")
        {
            users[log[1]] = log[2];
        }
    }

    for (int i = 0; i < record.size(); i++)
    {
        vector<string> log = split(record[i], ' ');

        if (log[0] == "Change")
        {
            continue;
        }
        else if (log[0] == "Enter")
        {
            answer.push_back(users[log[1]] + "님이 들어왔습니다.");
        }
        else if (log[0] == "Leave")
        {
            answer.push_back(users[log[1]] + "님이 나갔습니다.");
        }
    }


    return answer;
}