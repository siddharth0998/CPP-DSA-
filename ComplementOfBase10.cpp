//101
//111
//010
//code won't work here it will work on leetcode

// solution 1
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int N = n;
        int bitmask = 0;
        while(n != 0){
            bitmask = (bitmask << 1) | 1;
            n = n>>1;
        }
        int ans = bitmask^N;
        return ans;
    }
};

// solution 2
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int N = n;
        int bitmask = 0;
        int powerOfTwo = 1;
        while(n != 0){
            bitmask += 1*powerOfTwo;
            powerOfTwo *= 2;
            n = n>>1;
        }
        int ans = bitmask^N;
        return ans;
    }
};

