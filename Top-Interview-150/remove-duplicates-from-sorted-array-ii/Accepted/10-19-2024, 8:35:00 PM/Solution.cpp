// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        if(nums.size() <= 2) return nums.size();
        for(int i=2;i<nums.size();i++) {
            if(nums[i] != nums[index - 1]) {
                index++;
                nums[index] = nums[i];
            }
        }
        return index + 1;
    }
};