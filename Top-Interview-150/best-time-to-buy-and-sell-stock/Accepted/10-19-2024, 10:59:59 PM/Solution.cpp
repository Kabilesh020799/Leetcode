// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int max = 0;
        int min = INT_MAX;
        for(int i=0;i<size;i++) {
            if(prices[i] < min) {
                min = prices[i];
            } else {
                if(prices[i] - min > max) {
                    max = prices[i] - min;
                }
            }
        }
        return max;
    }
};