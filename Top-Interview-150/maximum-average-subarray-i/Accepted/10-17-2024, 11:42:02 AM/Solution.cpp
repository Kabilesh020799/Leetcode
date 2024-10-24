// https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = 0;
        int sum = 0;
        for(int i=0;i<k;i++) {
            sum += nums[i];
        }
        maxAvg = (double)sum / k;
        for(int i=1;i<=nums.size() - k;i++) {
            sum -= nums[i-1];
            sum += nums[i + k - 1];
            double avg = (double)sum / k;
            if(maxAvg < avg) {
                maxAvg = avg;
            }
        }
        return maxAvg;
    }
};