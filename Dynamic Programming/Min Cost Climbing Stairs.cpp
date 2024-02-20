// https://leetcode.com/problems/min-cost-climbing-stairs/description/

// recursion
// tc --> O(N)
// sc --> O(N)
class Solution {
private:
    int helper(int index, vector<int> &cost)
{
    if (index == 0)
        return cost[0];
    if (index == 1)
        return cost[1];

    return cost[index] + min(helper(index-1, cost), helper(index-2, cost));
}

public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        return min(helper(n-1, cost), helper(n-2, cost));
    }
};

// memoization
// tc --> O(N)
// sc --> O(N)

class Solution {
private:
    int helper(int index, vector<int> &cost, vector<int> &dp)
{
    if (index == 0)
        return cost[0];
    if (index == 1)
        return cost[1];
    if(dp[index] != -1) return dp[index];
    return dp[index] = cost[index] + min(helper(index-1, cost, dp), helper(index-2, cost, dp));
}

public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1, -1);
        return min(helper(n-1, cost, dp), helper(n-2, cost, dp));
    }
};

// Tabulation
// tc --> O(N)
// sc --> O(N)

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n);

        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i=2; i<n; i++)
        {
           dp[i] = cost[i] + min(dp[i-2], dp[i-1]);
        }

        return min(dp[n-2], dp[n-1]);
    }
};

// space-optimization 
// tc --> O(N)
// sc --> O(1)

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        int oneStep = cost[0];
        int twoStep = cost[1];

        for(int i=2; i<n; i++)
        {
           int res = cost[i] + min(oneStep, twoStep);
           oneStep = twoStep;
           twoStep = res;
        }

        return min(oneStep, twoStep);
    }
};
