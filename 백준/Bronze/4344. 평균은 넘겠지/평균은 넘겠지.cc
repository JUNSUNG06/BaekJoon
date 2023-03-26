#include<iostream>
using namespace std;

int main()
{
    int testCase, n, upperstudent;
    float avg, upperratio;
    int* scores;
    float* arr;

    cin >> testCase;
    arr = new float[testCase];

    for (int i = 0; i < testCase; i++)
    {
        cin >> n;
        scores = new int[n];
        
        upperstudent = 0;
        avg = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> scores[j];
            avg += scores[j];
        }

        avg /= n;

        for (int j = 0; j < n; j++)
        {
            if (scores[j] > avg)
            {
                upperstudent++;
            }
        }

        delete[] scores;

        upperratio = ((float)upperstudent / n) * 100;
        arr[i] = upperratio;
    }

    for (int i = 0; i < testCase; i++)
    {
        cout << fixed;
        cout.precision(3);
        cout << arr[i] << '%' << endl;
    }
}