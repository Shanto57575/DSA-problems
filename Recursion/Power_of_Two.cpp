// https://leetcode.com/problems/power-of-two/description/

// tc--> O(log N)
// sc--> O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)return true;
        long long ans = 1;
        while(1)
        {
            ans*=2;
            if(ans==n)return true;
            if(ans>n)return false;
        }
        return false;
    }
};
// recursive solution
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)return true;
        if(n%2!=0 || n<=0)return false;
        return isPowerOfTwo(n/2);
    }
};

// tc--> O(log N)
// sc--> O(1)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        return ((n & (n-1)) == 0);
        return false;
    }
};

// tc --> O(1)
// sc --> O(1)
