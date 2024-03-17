#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    char alpha;
    int n, start, end;
    vector<vector<int>> cnt;

    cin >> str >> n;

    cnt.resize('z' - 'a' + 1, vector<int>(str.size() + 1, 0));
    for (int i = 1; i <= str.size(); i++)
    {
        for (int j = 0; j <= 'z' - 'a'; j++)
            cnt[j][i] = cnt[j][i - 1];

        cnt[str[i - 1] - 'a'][i]++;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> alpha >> start >> end;
        char c = alpha - 'a';
        cout << cnt[c][end + 1] - cnt[c][start] << '\n';
    }
}