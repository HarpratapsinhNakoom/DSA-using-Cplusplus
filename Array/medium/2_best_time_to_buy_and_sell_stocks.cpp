//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int s = 0;
        int e = 1;
        
        while(e < prices.size()) {
            if(prices[e] - prices[s] <= 0) {
                s = e;
                e++;
            }else {
                ans = max(ans , prices[e] - prices[s]);
                e++;
            }
        }
        
        return ans;
    }
};
