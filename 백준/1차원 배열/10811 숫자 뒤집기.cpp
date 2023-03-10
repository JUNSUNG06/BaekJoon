#include<iostream>
#include<cmath>
using namespace std;

void Swap(int _begin, int _end, int* _arr)
{
    int temp, n = ceil(((float)_end - (float)_begin) / 2);

    if (n == 0)
        return;

    for (int i = 0; i < n; i++)
    {
        temp = _arr[_begin + i];
        _arr[_begin + i] = _arr[_end - i];
        _arr[_end - i] = temp;
    }

}

int main()
{
    int n, m, begin, end;
    int* arr;

    cin >> n >> m;
    arr = new int[n];

    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    for (int i = 0; i < m; i++)
    {
        cin >> begin >> end;
        begin--;
        end--;

        Swap(begin, end, arr);
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}