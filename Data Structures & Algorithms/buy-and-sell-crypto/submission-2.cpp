class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        int curr;
        for (int i = 0; i < prices.size(); i++) {

            if (buy > prices[i]) {
                buy = prices[i];
            }
            curr = prices[i] - buy;
            if (profit < curr) {
                profit = curr;
            }
        }
        return profit;
    }
};
