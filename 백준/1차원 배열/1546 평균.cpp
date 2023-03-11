//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n, maxScore;
//    int* scores;
//    float sum = 0;
//
//    cin >> n;
//    scores = new int[n];
//
//    for (int i = 0; i < n; i++)
//        cin >> scores[i];
//
//    for (int i = n; i > 0; i--)
//    {
//        for (int j = 0; j < i - 1; j++)
//        {
//            if (scores[j] > scores[j + 1])
//            {
//                int temp = scores[j];
//                scores[j] = scores[j + 1];
//                scores[j + 1] = temp;
//            }
//        }
//    }
//
//    maxScore = scores[n - 1];
//
//    for (int i = 0; i < n; i++)
//    {
//        sum += (float)scores[i] / (float)maxScore * 100;
//    }
//
//    cout << sum / (float)n;
//}