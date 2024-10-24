// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

#include<algorithm>
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int maxVal = 0;
        for(int i=0;i<candies.size();i++) {
            if(maxVal < candies[i]) {
                maxVal = candies[i];
            }
        }
        for(int i=0;i<candies.size();i++) {
            if((candies[i] + extraCandies) >= maxVal) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }
        return res;
    }
};