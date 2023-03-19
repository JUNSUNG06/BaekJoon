//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n, m, a;
//	int** arr;
//
//	cin >> n >> m;
//	arr = new int*[n];
//	for (int i = 0; i < n; i++)
//		arr[i] = new int[m];
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a;
//			arr[i][j] += a;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << arr[i][j] << ' ';
//		}
//
//		cout << endl;
//	}
//}