// https://leetcode.com/problems/increasing-triplet-subsequence

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int size = nums.size();
        vector<int> left(size, 0);
        vector<int> right(size, 0);
        int min = INT_MAX;
        int max = 0;
        for(int i=0;i<size;i++) {
            if(min > nums[i]) {
                min = nums[i];
            }
            left[i] = min;
        }
        for(int i=size-1;i>0;i--) {
            if(max < nums[i]) {
                max = nums[i];
            }
            right[i] = max;
        }
        for(int i=0;i<size;i++) {
            if(nums[i] > left[i] && nums[i] < right[i]) {
                return true;
            }
        }
        return false;
    }
};