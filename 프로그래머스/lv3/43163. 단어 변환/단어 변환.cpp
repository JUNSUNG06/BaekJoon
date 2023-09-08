#include <string>
#include <vector>
#include <map>
#include <queue>
#include<iostream>
using namespace std;

bool isLinked(string a, string b)
{
	int diff = 0;

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] != b[i])
			diff++;
	}

	if (diff == 1)
		return true;
	else
		return false;
}

int solution(string begin, string target, vector<string> words) {
	int answer = 0;

	map<string, int> visited;
	queue<string> que;

	que.push(begin);
	visited[begin] = 0;

	while (!que.empty())
	{
		string now = que.front();
		que.pop();

		for (int i = 0; i < words.size(); i++)
		{
			string next = words[i];

			if (visited.find(next) == visited.end() && isLinked(now, next))
			{
				que.push(next);
				visited.insert(make_pair(next, visited[now] + 1));

				if (next == target)
				{
					answer = visited[next];
				}
			}
		}
	}

	return answer;
}