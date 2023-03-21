#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int horSize = 100, verSize = 100;
    int inputX, inputY, n, count = 0;
    short paper[100][100];

    fill(&paper[0][0], &paper[99][100], 0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> inputX >> inputY;

        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                paper[inputY + j][inputX + k] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if (paper[i][j] == 1)
                count++;
        }
    }

    cout << count;
}