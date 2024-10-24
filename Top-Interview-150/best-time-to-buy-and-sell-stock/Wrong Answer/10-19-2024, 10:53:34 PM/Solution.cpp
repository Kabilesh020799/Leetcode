// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int size = prices.size();
        int j = size - 1;
        int max = 0;
        int min = INT_MAX;
        while(i < j) {
            if(prices[i] < min) {
                min = prices[i];
            }
            if(prices[j] > max) {
                max = prices[j];
            }
            i++;
            j--;
        }
        int sum = max - min;
        if(sum <= 0) {
            return 0;
        } else {
            return sum;
        }
    }
};