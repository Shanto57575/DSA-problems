// https://leetcode.com/problems/find-pivot-index/description/

// TC -> O(N) && Sc--> O(1)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        long long rightSum =  accumulate(nums.begin(), nums.end(), 0);
        long long leftSum = 0;

        for(int i=0; i<nums.size(); i++)
        {
            rightSum -= nums[i];
            if(leftSum==rightSum){
                return i;
            }
            else{
                leftSum += nums[i];
            }
        }

        return -1;
    }
};
