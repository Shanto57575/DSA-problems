// https://leetcode.com/problems/house-robber/description/

// recursion
// tc --> O(2^N)
// sc --> O(N)

class Solution {
private:
    int solve(int index, vector<int>& nums)
    {
        if(index < 0) return 0;

        int pick = nums[index] + solve(index - 2, nums);
        int notPick = solve(index - 1, nums);

        return max(pick, notPick);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        return solve(n - 1, nums);
    }
};

// memoization
// tc --> O(N)
// sc --> O(N)

class Solution {
private:
    int solve(int index, vector<int>& nums, vector<int>& dp)
    {
        if(index < 0) return 0;
        
        if(dp[index] != -1)return dp[index];

        return dp[index] = max((nums[index] + solve(index - 2, nums, dp)), solve(index - 1, nums, dp));
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        return solve(n - 1, nums, dp);
    }
};

// tabulation
// tc --> O(N)
// sc --> O(N)

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        vector<int> dp(n);
        dp[0] = nums[0];
        
        for(int i = 1; i < n; i++)
        {
            int pick = nums[i];
            if(i>1) pick += dp[i-2];
            int notPick = dp[i-1];
            dp[i] = max(pick, notPick);
        }

        return max(dp[n-1], dp[n-2]);
    }
};

// space optimization
// tc --> O(N)
// sc --> O(1)

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
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
};
