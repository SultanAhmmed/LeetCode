class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int LowPrices = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(LowPrices > prices[i]) LowPrices = prices[i];
            res = max(res, abs(LowPrices - prices[i]));
        }
        return res;
        
    }
};
