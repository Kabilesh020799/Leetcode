// https://leetcode.com/problems/majority-element

class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        int size = nums.length;
        for(int i=0;i<size;i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        for(int ch: map.keySet()) {
            if(map.get(ch) > size/2) {
                return ch;
            }
        }
        return -1;
    }
}