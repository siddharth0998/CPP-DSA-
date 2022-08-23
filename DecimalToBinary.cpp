#include<iostream>
using namespace std;


int decimalToBinary(int n){
    int x = 1;
    int ans = 0;
    while(n){
        int rem = n%2;
        ans += rem*x;
        x *= 10;
        n /= 2; 
    }
    return ans;
}
int main()
{
   int n;
   cin>>n;
   cout<< decimalToBinary(n)<<endl;
   return 0;
}