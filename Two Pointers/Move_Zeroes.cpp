// https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int left = 0;
        for(int right = 0; right<nums.size(); right++)
        {
            if(nums[right]!=0)
            {
               swap(nums[right], nums[left]);
               left++;
            }
        }
    }
};

// tc ---> O(N)
// sc ---> O(1)
