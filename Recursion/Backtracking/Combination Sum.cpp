// https://leetcode.com/problems/combination-sum/description/

// tc --> O(2^n)
// sc --> O(n * 2^n)

class Solution {
private:
   void helper(int index,vector<int>&v, vector<int>& candidates,vector<vector<int>> &ans, int target)
   {
       if(index >= candidates.size())
       {
           if(target == 0)
           {
             ans.push_back(v);
           }
           return;
       }

       if(candidates[index] <= target)
       {
           v.push_back(candidates[index]);
           helper(index,v,candidates,ans, target-candidates[index]);
           v.pop_back();
       }
       helper(index+1,v,candidates,ans,target);
   }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(0, v, candidates,ans, target);
        return ans;        
    }
};
