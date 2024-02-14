// https://leetcode.com/problems/combination-sum-ii/description/

class Solution {
private:
   void helper(int index, vector<int> &v, vector<int> &candidates, vector<vector<int>> &ans, int target)
   {
     if(target==0)
     {
        ans.push_back(v);
        return;
     }
     for(int i = index; i < candidates.size(); i++)
     {
        if(i > index && candidates[i]==candidates[i-1])continue;
        if(candidates[i]>target)break;
        v.push_back(candidates[i]);
        helper(i+1, v, candidates, ans, target-candidates[i]);
        v.pop_back();
     }
   }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int>v;
        helper(0, v, candidates, ans, target);
        return ans;
    }
};
