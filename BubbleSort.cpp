#include <iostream>
using namespace std;

// 2 9 5 7 3 10 1 4
// 1 2 3 4 5 7 9 10

// 3 2 1
// 2 1 3
// 1 2 3
int main()
{
    int n;
    cin >> n;
    int counter = 1;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                arr[i] = (arr[i]) ^ (arr[i + 1]);
                arr[i + 1] = (arr[i]) ^ (arr[i + 1]);
                arr[i] = (arr[i]) ^ (arr[i + 1]);
            }
        }
        counter++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}