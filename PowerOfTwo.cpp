class Solution {
public:
    bool isPowerOfTwo(int n) {
        // solution 1
        // for(int i=0; i<=30; i++){
        //     int ans = pow(2,i);
        //     if(ans == n){
        //         return true;
        //     }
        // }
        // return false;

        // solution 2
        //int ans = 1;
        // for(int i=0; i<=30; i++){
        //     if(n == ans) {
        //         return true;
        //     }
        //     if(ans < INT_MAX/2)
        //     ans = ans*2;
        // }
        // return false;
        
        // faster solution 3
        if(n<=0) return false;
        return ((n&n-1)==0);
    }
};