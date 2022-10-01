#include <iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void SwapAlternateElement(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            arr[i] = arr[i] ^ arr[i + 1];
            arr[i + 1] = arr[i] ^ arr[i + 1];
            arr[i] = arr[i] ^ arr[i + 1];
        }
    }
    PrintArray(arr, size);
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
    SwapAlternateElement(arr, n);
    return 0;
}