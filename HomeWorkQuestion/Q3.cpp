#include<iostream>
using namespace std;

int Fibonnacci_Nth_term(int n) {
    int a = 0;
    int b = 1;
    if(n == 1) return a;
    if(n == 2) return b;
    int Nth = 0;
    for(int i=3; i<=n; i++){
        Nth = a + b;
        a = b;
        b = Nth;
    }
    return Nth;
}

int main()
{
    cout<< "Enter the Number" << endl;
    int n;
    cin>>n;
    cout << "output is: " << Fibonnacci_Nth_term(n) << endl;
    return 0;
}