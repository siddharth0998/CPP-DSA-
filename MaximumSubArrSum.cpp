#include <iostream>
#include "bits/stdc++.h"
// 1 2 -3 7
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if(currSum > maxSum){
            maxSum = currSum;
        }

        if(currSum < 0){
            currSum = 0;
        }
    }
    
    cout << maxSum << endl;

    return 0;
}