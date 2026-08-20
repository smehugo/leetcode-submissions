class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (buy > prices[i - 1] && i > 0) {
                buy = prices[i - 1];
            }
            
            if (profit < prices[i] - buy) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};
