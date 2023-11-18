//problem : https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = n*(n+1)/2;
        for(auto i:nums)
           totalSum -= i;
        return totalSum;
    }
};
