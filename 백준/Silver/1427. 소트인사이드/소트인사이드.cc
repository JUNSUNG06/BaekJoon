#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> arr = {};

//내림차순
void quickSort(int start, int end)
{
	//정렬할게 하나 이하면 안 함
	if (start >= end)
		return;

	int left = start + 1;
	int right = end;
	int temp = 0;

	//아래 작업 교차할 때 까지 반복
	while (true)
	{
		//피봇보다 크거나 오른쪽 인덱스보다 작을 때 만
		while (arr[left] >= arr[start] && left < end)
			left++;
		//피봇보다 작거나 왼족 인덱스보다 크거나 같을 때 만
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

	//가장 오른쪽에 있는 피봇보다 작은 값과 피봇 변경
	temp = arr[start];
	arr[start] = arr[right];
	arr[right] = temp;

	//왼쪽, 오른쪽 정렬
	quickSort(start, right - 1);
	quickSort(right + 1, end);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		arr.push_back(str[i] - 48);
	}

	quickSort(0, str.size() - 1);

	for (int i = 0; i < str.size(); i++)
		cout << arr[i];
}