// https://leetcode.com/problems/next-permutation/description/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();

        int index = -1;

        for(int i=n-2; i>=0; i--) // because n-2 + 1 = n-1...so that we can compare
        {
            if(nums[i]<nums[i+1])
            {
                index = i;
                break;
            }
        }

        //if the value of the index doesnt change, we just need to reverse the full array
        if(index == -1)
        {
          reverse(nums.begin(),nums.end());
          return ;
        }

        for(int i=n-1; i>= index+1 ; i--)
        {
            if(nums[i]>nums[index])
            {
                swap(nums[i], nums[index]);
                break;
            }
        }

        reverse(nums.begin() + index + 1, nums.end());
    }
};
