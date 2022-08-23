#include <bits/stdc++.h>
using namespace std;


bool check(int x, int y, int z){
    int maximum = max(x, max(y,z));
    int b, c;
    if(maximum == x){
        b = y;
        c = z;
    }
    else if(maximum == y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(maximum*maximum == b*b + c*c) return true;
    else return false;
}


int main(){
    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Pythagorean triplet";
    }
    else{
        cout<<"Not a Pythagorean triplet";
    }
}

