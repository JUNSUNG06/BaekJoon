#include<vector>
#include<queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = -1;
    vector<vector<int>> visited;
    queue<pair<int, int>> que;
    int dx[] = { 1, 0, -1, 0 };
    int dy[] = { 0, 1, 0, -1 };
    int col, row;
    bool isArrive = false;

    row = maps.size();
    col = maps[0].size();
    visited.resize(row, vector<int>(col, -1));
    que.push({ 0, 0 });
    visited[0][0] = 1;

    while (!que.empty())
    {
        int x = que.front().first;
        int y = que.front().second;

        que.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= col || ny >= row)
                continue;

            if (maps[ny][nx] == 1 && visited[ny][nx] == -1)
            {
                que.push({ nx, ny });
                visited[ny][nx] = visited[y][x] + 1;
                if (nx == col - 1 && ny == row - 1)
                {
                    isArrive = true;
                    answer = visited[ny][nx];
                    break;
                }
            }
        }
        
        if (isArrive)
            break;
    }
    
    return answer;
}