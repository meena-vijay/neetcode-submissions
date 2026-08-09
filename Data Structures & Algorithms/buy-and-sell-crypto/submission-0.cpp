class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mprofit = 0;

        int minSoFar = prices[0];
        for(int i=0; i<prices.size(); i++){
            profit = prices[i] - minSoFar;
            mprofit = max(mprofit, profit);

            minSoFar = min(prices[i], minSoFar);
        }

        return mprofit;
    }
};
