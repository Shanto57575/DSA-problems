// https://leetcode.com/problems/subsets-ii/description/

// tc --> O(2^n * n)
// sc --> O(2^n * n)

class Solution {
private:
    void helper(int index, vector<int>v, vector<int>nums,vector<vector<int>> &ans)
    {
        if(index >= nums.size())
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[index]);
        helper(index + 1, v, nums,ans);
        v.pop_back();
        while(index + 1 < nums.size() && nums[index] == nums[index+1])index++;
        helper(index + 1, v, nums,ans);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(), nums.end());
        helper(0, v, nums, ans);
        return ans;
    }
};
