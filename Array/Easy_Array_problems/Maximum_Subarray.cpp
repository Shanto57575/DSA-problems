// https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maximum = INT_MIN;
        long long sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(sum<0)sum = 0;
            sum+=nums[i];
            maximum = max(maximum, sum);
        }
        return maximum;
    }
};
