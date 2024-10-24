// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int maxVal = 0;
        for(int i =0;i<size;i++) {
            if(i <= maxVal) {
                if((nums[i] + i) > maxVal) {
                    maxVal = nums[i] + i;
                }
            }
            if(maxVal >= size - 1) {
                return true;
            }
        }
        return false;
    }
};