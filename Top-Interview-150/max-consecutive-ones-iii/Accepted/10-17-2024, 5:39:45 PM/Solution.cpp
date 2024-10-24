// https://leetcode.com/problems/max-consecutive-ones-iii

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int maxVal = 0;
        int count = 0;
        for(j=0;j<nums.size();j++){
            if(nums[j] == 0) {
                k--;
            }
            while(k<0) {
                if(nums[i] == 0) {
                    k++;
                }
                i++;
            }
            if(maxVal < j-i+1) {
                maxVal = j-i+1;
            }
        }
        return maxVal;
    }
};