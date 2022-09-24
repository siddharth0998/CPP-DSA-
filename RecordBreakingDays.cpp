#include "bits/stdc++.h"
using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mx = -1;
    int count = 0;
    for(int i=0;i<n;i++){
        if(i==n-1){
            if(arr[i] > mx){
                count++;
            }
        }
        else if(arr[i] > mx && arr[i] > arr[i+1]){
            count++;
        }
        mx = max(mx,arr[i]);
    }

    cout<< count << endl;


    return 0;
}
