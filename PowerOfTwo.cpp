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
        
        // faster solution 2
        if(n<=0) return false;
        return ((n&n-1)==0);
    }
};