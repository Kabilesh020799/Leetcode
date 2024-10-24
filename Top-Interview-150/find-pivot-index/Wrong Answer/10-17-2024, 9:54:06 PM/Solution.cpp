// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        int mid = size / 2;
        int left_sum=0, right_sum = 0;
        for(int i = 0;i<mid;i++) {
            left_sum += nums[i];
        }
        for(int i = mid+1;i<size;i++) {
            right_sum += nums[i];
        }
        while(mid >= 0 && mid < size-1) {
            if(left_sum == right_sum) {
                return mid;
            }
            if(left_sum < right_sum) {
                left_sum += nums[mid];
                right_sum -= nums[mid+1];
                mid = mid + 1;
            } else if(left_sum > right_sum) {
                right_sum += nums[mid];
                left_sum -= nums[mid-1];
                mid = mid - 1;
            }
        }
        return -1;
    }
};