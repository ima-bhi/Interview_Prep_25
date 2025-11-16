class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mPrice = prices[0], maxProfit = 0;
        // step 1: iterate over to calcuate maximize profit
        for (int i = 1; i < prices.size(); i++) {
            // find minum
            mPrice = min(min(prices[i - 1], prices[i]), mPrice);
            // profit
            maxProfit = max((prices[i] - mPrice), maxProfit);
        }
        return maxProfit;
    }
};