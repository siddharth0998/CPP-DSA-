#include<iostream>
using namespace std;

bool isEven(int n){
    if(n&1){
        return 0;
    }
    return 1;
}

int main()
{
    cout<< "Enter a number" << endl;
    int n;
    cin>>n;
    
    if(isEven(n)){
        cout<< n <<" is Even Number" << endl;
    }
    else{
        cout << n << " is Odd Number" << endl;
    }
    return 0;
}