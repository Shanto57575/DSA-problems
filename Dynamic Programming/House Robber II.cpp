// https://leetcode.com/problems/house-robber-ii/description/
// tc --> O(N)
// sc --> O(N)

class Solution {
private:
    int ans(vector<int>& nums) 
    {
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;
        
        for(int i = 1; i < n; i++)
        {
            int pick = nums[i];
            if(i>1) pick += prev2;
            int notPick = prev;

            prev2 = prev;
            prev = max(pick, notPick);
        }
        return prev;
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        
        vector<int>first, last;
        
        for(int i = 0; i<n; i++)
        {
            if(i != 0) first.push_back(nums[i]);
            if(i != n-1) last.push_back(nums[i]);
        }

        return max(ans(first), ans(last));
    }
};

// tc --> O(N)
// sc --> O(1)

class Solution {
private:
    int ans(vector<int>& nums, int start, int end) 
    {
        int n = nums.size();
        int prev = 0;
        int prev2 = 0;
        
        for(int i = start; i <= end; i++)
        {
            int pick = nums[i] + prev2;
            int notPick = prev;
            prev2 = prev;
            prev = max(pick, notPick);
        }
        return prev;
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        return max(ans(nums, 0, n-2), ans(nums, 1, n-1));
    }
};
