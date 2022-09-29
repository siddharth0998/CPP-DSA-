#include <iostream>
using namespace std;

int SetBit(int n){
    int count = 0;
    while(n != 0){
        if(n&1){
            count++;
        }
       n = n >> 1;
    }
    return count;
}

int TotalSetBit(int a, int b)
{
    return SetBit(a) + SetBit(b); 
}

int main()
{
    cout << "Enter a and b" << endl;
    int a, b;
    cin >> a >> b;
    TotalSetBit(a,b);
    cout << "output is: " << TotalSetBit(a, b) << endl;
    return 0;
}