#include <iostream>
using namespace std;

int ArraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum +=  arr[i];
    }
    return sum;
}

int main()
{
    cout << "Enter Size of Array" << endl;
    int n;
    cin >> n;
    cout << "Enter Array Element" << endl;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = ArraySum(arr, n);
    cout << "Sum of all element of array is: " << sum << endl;
    return 0;
}