// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int n = prices.size();

       int minimum = prices[0];
       int maximumProfit = 0;

       for(int i=1; i<n; i++)
       {
         int profit = prices[i] - minimum;
         maximumProfit = max(maximumProfit, profit);
         minimum = min(minimum, prices[i]);
       }

       return maximumProfit;
        
    }
};
