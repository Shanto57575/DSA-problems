// https://leetcode.com/problems/subsets/

// tc --> O(2^N * N)
// sc --> O(2^N * N)

class Solution {
private:
    void helper(int index, vector<int>v, vector<int>nums,vector<vector<int>> &ans)
    {
        if(index>=nums.size())
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[index]);
        helper(index + 1, v, nums,ans);
        v.pop_back();
        helper(index + 1, v, nums,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(0, v, nums, ans);
        return ans;
    }
};
