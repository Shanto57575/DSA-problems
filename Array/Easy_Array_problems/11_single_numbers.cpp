// problem : https://leetcode.com/problems/single-number/description/

// Approach 1 : (map)
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int>mp;

        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;
        

        for(auto u:mp)
        {
            if(u.second==1)
            return u.first;
        }

        return 0;
    }
};

//Aproach 2 : (XOR)

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans = 0;
        
        for(int i : nums){
            ans = ans ^ i;
        }

        return ans;
    }
};
