// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<size-1;i++) {
            while(nums[i] == nums[i+1]) {
                nums.erase(nums.begin() + i);
                size--;
            }
        }
        return nums.size();
    }
};