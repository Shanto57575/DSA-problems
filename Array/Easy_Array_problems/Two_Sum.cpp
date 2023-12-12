// https://leetcode.com/problems/two-sum/description/

// Brute force solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]+nums[j]==target)
                return {i,j};
            }
        }
        return { };
    }
};

// optimized solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int>mp;
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
           int ans = target - nums[i];
           if(mp.find(ans) != mp.end())
           {
             return {i, mp[ans]};
           }

            mp[nums[i]] = i; 
        }

        return {};
    }
};
