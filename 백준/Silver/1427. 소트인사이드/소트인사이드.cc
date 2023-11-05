#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> arr;

void quickSort(int start, int end)
{
	//정렬할게 하나 이하면 안 함
	if (start >= end)
		return;

	int left = start + 1;
	int right = end;
	int temp = 0;

	while (true)
	{
		while (arr[left] >= arr[start] && left < end)
			left++;
		while (arr[right] <= arr[start] && right > start)
			right--;

		if (left < right)
		{
			temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
		}
		else
		{
			break;
		}
	}

	temp = arr[start];
	arr[start] = arr[right];
	arr[right] = temp;

	quickSort(start, right - 1);
	quickSort(right + 1, end);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string num;
    cin >> num;

    for (int i = 0; i < num.size(); i++)
    {
        arr.push_back(num[i] - 48);
    }

    quickSort(0, num.size() - 1);

    for (int i = 0; i < num.size(); i++)
        cout << arr[i];
}