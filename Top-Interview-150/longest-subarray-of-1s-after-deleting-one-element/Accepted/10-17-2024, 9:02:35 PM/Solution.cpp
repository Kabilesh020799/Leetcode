// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal = 0;
        int k = 1;
        int i = 0;
        for(int j=0;j<nums.size();j++) {
            if(nums[j] == 0) {
                k--;
            }

            while(k<0) {
                if(nums[i] == 0){
                    k++;
                }
                i++;
            }
            if(maxVal < (j-i+1)) {
                maxVal = j-i+1;
            }
        }
        return maxVal-1;
    }
};