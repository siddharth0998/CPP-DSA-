#include<iostream>
using namespace std;

void AP(int n){
    cout<< "output is: " << 3*n + 7 << endl;
}

int main()
{
    cout<< "Enter the Number" << endl;
    int n;
    cin>>n;
    AP(n);
    return 0;
}