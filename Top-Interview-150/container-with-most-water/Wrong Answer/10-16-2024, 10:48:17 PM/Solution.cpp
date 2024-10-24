// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxEle(int a, int b) {
        if(a>b) {
            return a;
        } else {
            return b;
        }
    }
    int maxArea(vector<int>& height) {
        int size = height.size();
        int i = 0;
        int j = size - 1;
        int maxVal = 1;
        while(i < j) {
            if(height[i] < height[j]) {
                maxVal = maxEle((j - i) * height[i], maxVal);
                i++;
            } else {
                maxVal = maxEle((j - i) * height[j], maxVal);
                j--;
            }
        }
        return maxVal;
    }
};