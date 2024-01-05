// https://leetcode.com/problems/non-decreasing-array/description/

// TC --> O(N) , Sc --> O(1)
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {

        int modified = 0;

        for(int i=1; i<nums.size(); i++)
        {
           if(nums[i]<nums[i-1])
           {
               if(modified==1)return false;
               else if(i<2 || nums[i-2]<=nums[i]){
                   nums[i-1] = nums[i];
               }
               else{
                   nums[i] = nums[i-1];
               }
               modified = 1;
           } 
        }

        return true;                                    
    }
};
