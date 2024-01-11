// https://leetcode.com/problems/two-sum/description/

// Brute force solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i=0; i<nums.size(); i++)
        {
           for(int j = 0; j<nums.size(); j++)
           {
               if(nums[i]+nums[j]==target && i!=j)
                   return {i,j};
           }
        }

        return {};
    }
};
// optimized solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int>mp;

        for(int i=0; i<nums.size(); i++) mp[nums[i]] = i;

        for(int i=0; i<nums.size(); i++)
        {
          int rem = target - nums[i];
          if(mp.find(rem) != mp.end() && (i!=mp[rem]))
            return {i, mp[rem]};
        }

        return {};
    }
};
