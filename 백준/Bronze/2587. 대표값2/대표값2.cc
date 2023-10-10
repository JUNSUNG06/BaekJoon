#include<iostream>
using namespace std;

int main()
{
    int arr[5], sum = 0, temp;
    
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
        
    for(int i = 0; i < 4; i++)
    {
        int minIdx = i;
        
        for(int j = i + 1; j < 5; j++)
        {
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        
        temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
    
    cout << sum / 5 << endl << arr[2];
}