#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 2;
    int pre_diff = arr[1] - arr[0];
    int curr_diff = pre_diff;
    int count = 2;

    for (int i = 2; i < n; i++)
    {
        if (pre_diff == arr[i] - arr[i - 1])
        {
            ans++;
        }
        else
        {
            pre_diff = arr[i] - arr[i-1];
            ans = 2;
        }
        count = max(count,ans);
    }

    cout<<"Longest Arithmatic SubArray is : "<<count<<endl;

    return 0;
}