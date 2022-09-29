#include<iostream>
#include "bits/stdc++.h"

using namespace std;

int main()
{

    cout<< "Enter a number" << endl;
    int n;
    cin>>n;
    int rs100=0,rs50=0,rs20=0,rs1=0;

    switch(1) {
        case 1: {
            rs100 = n/100;
            n = n%100;
            cout<< "100 rs note: " << rs100 << endl;
        }
        case 2: {
            rs50 = n/50;
            n = n%50;
            cout << "50 rs note: " << rs50 << endl;
        }
        case 3: {
            rs20 = n/20;
            n = n%20;
            cout << "20 rs note: " << rs20 << endl;
        }
        case 4: {
            rs1 = n/1;
            n = n%1;
            cout<< "1 rs note: " << rs1 << endl;
            break;
        }
    }
    return 0;
}