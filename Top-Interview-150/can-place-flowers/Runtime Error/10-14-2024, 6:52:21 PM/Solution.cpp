// https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k = 0;
        for(int i=0;i<flowerbed.size();i++) {
            if (i==0 && flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                k++;
                flowerbed[i] = 1;
            } else if(i == flowerbed.size() - 1 && flowerbed[i] == 0 && flowerbed[i - 1] == 0) {
                k++;
                flowerbed[i] = 1;
            } if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                k++;
                flowerbed[i] = 1;
            }
        }
        return n <= k;
    }
};