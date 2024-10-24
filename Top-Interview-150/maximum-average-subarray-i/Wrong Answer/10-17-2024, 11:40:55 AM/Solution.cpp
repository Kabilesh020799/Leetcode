// https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        float maxAvg = 0;
        int sum = 0;
        for(int i=0;i<k;i++) {
            sum += nums[i];
        }
        maxAvg = (float)sum / k;
        cout<<sum;
        for(int i=1;i<=nums.size() - k;i++) {
            sum -= nums[i-1];
            sum += nums[i + k - 1];
            cout<<sum;
            float avg = (float)sum / k;
            if(maxAvg < avg) {
                maxAvg = avg;
            }
        }
        return maxAvg;
    }
};