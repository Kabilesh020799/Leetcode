// https://leetcode.com/problems/find-the-highest-altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxVal = 0;
        int sum = 0;
        for(int i=0;i<gain.size();i++) {
            sum += gain[i];
            if(maxVal < sum) {
                maxVal = sum;
            }
        }
        return maxVal;
    }
};