// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/ 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int small = prices[0];// 7
       int ans = 0;

       for(int i=0; i<prices.size(); i++)
       {
         small = min(small, prices[i]);
         ans = max(ans, prices[i] - small);
       } 
       return ans;
    }
};
