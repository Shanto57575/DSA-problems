// https://leetcode.com/problems/rearrange-array-elements-by-sign/solutions/3169890/best-c-2-solution-two-pointers-optimized-solution/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int i = 0;
        int j = 1;
        int n = nums.size();
        vector<int>v(n);

        for(int k = 0; k<n; k++)
        {
           if(nums[k]>0 && i<n)
           {
               v[i] = nums[k];
               i += 2;
           }
           else if(nums[k]<0 && j<n)
           {
               v[j] = nums[k];
               j += 2;
           }
        }
        
        return v;
    }
};
