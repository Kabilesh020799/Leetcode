// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int size = nums.size();
        for(int i=0;i<size;i++) {
            int prod = 1;
            for(int j = 0;j<size;j++) {
                if(i!=j) {
                    prod *= nums[j];
                }
            }
            res.push_back(prod);
        }
        return res;
    }
};