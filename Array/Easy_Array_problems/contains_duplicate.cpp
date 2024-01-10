// https://leetcode.com/problems/contains-duplicate/description/

// using set 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int>s;

        for(int i : nums)
        {
            s.insert(i);
        }

        return (s.size()!=nums.size());
    }
};

// using hashmap

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>cntTwice;

        for(auto n : nums)cntTwice[n]++;
        
        for(auto n : cntTwice)
        {
            if(n.second>=2)return true;
        }

        return false;
    }
};

// using sort

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1])return true;
        }

        return false;
    }
};

