// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int max = 0;
        for(int i=1;i<size;i++) {
            if(prices[i] > prices[i-1]) {
                max += prices[i] - prices[i-1];
            }
        }
        return max;
    }
};