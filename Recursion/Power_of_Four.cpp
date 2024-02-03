// https://leetcode.com/problems/power-of-four/description/

// tc--> O(log4(N))
// sc--> O(log4(N))

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        if(n==1)return true;
        if(n%4!=0)return false;
        return isPowerOfFour(n/4);
    }
};

// tc--> O(log4(N))
// sc--> O(1)
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        while(n>0)
        {
            if(n%4!=0)break;
            n/=4;
        }
        return n==1;
    }
};
