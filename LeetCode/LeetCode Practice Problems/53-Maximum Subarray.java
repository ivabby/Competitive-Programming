class Solution {
    public int maxSubArray(int[] nums) {
        int mx = nums[0];
        int cur = nums[0];
        
        for(int i=1;i<nums.length;i++) {
            cur = Math.max(cur + nums[i] , nums[i]);
            mx = Math.max(mx , cur);
        }
        return mx;
    }
}
