// https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k = 0;
        int size = flowerbed.size();
        for(int i=0;i<size;i++) {
            if(flowerbed[i] == 0) {
                int left = (i == 0 || (flowerbed[i - 1] == 0));
            int right = ((i == size - 1) || (flowerbed[i + 1] == 0));
            if(left && right) {
                k++;
                flowerbed[i] = 1;
                if(n <= k) return true;
                i++;
            }
            }
        }
        return n <= k;
    }
};