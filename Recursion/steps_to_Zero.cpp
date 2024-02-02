// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/

class Solution {
public:
    int numberOfSteps(int num) {
        return helper(num,0);
    }
private:
    int helper(int num, int steps)
    {
        if(num==0)return steps;
        (num%2==0) ? num/=2 : num--;
        return helper(num, steps + 1);
    }
};

// tc--> O(NUM)
// sc--> O(NUM)
