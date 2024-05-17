class Solution {
    public int threeSumClosest(int[] nums, int target) {
        int n = nums.length;
        int res = nums[0] + nums[1] + nums[n-1];
        Arrays.sort(nums);
        for(int i=0;i<n-2;i++) {
            int a = i + 1;
            int b = n - 1;
            while(a<b) {
                int cur = nums[i] + nums[a] + nums[b];
                if(cur < target) {
                    a++;
                } else {
                    b--;
                }
                if(Math.abs(res - target) > Math.abs(cur - target)) {
                    res = cur;
                }
            }
        }
        return res;
    }
}