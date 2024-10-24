class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size();
        if(size <= 1) return 0;

        int currentEnd = 0;
        int maxVal = 0;
        int jumps = 0;

        for(int i =0;i<size;i++) {
            if(maxVal < (nums[i] + i)) {
                maxVal = nums[i] + i;
            }
            if(i == currentEnd) {
                jumps++;
                currentEnd = maxVal;
                if(currentEnd >= size - 1) {
                    return jumps;
                }
            }
        }
        return jumps;
    }
};