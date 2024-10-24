// https://leetcode.com/problems/increasing-triplet-subsequence

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int size = nums.size();
        for(int i=0;i<size-2;i++) {
            if(nums[i] < nums[i + 1] && nums[i] < nums[i + 2]) {
                return true;
            }
        }
        return false;
    }
};