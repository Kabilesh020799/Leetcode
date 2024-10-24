// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> res(size, 1);
        
        int left_prod = 1;
        for(int i=0;i<size;i++) {
            res[i] = left_prod;
            left_prod *= nums[i];
        }

        int right_prod = 1;
        for(int j=size-1;j>=0;j--) {
            res[j] *= right_prod;
            right_prod *= nums[j];
        }
        return res;
    }
};