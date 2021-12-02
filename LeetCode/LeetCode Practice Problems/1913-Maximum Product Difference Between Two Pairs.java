class Solution {
    public int maxProductDifference(int[] nums) {
        int c[] = new int[4];
        c[0] = c[1] = Integer.MAX_VALUE;
        
        for(int i=0;i<nums.length;i++) {
            if(nums[i] > c[3]) {
                c[2] = c[3];
                c[3] = nums[i];
            }
            else if(nums[i] > c[2]) {
                c[2] = nums[i];
            }
            if(nums[i] < c[0]) {
                c[1] = c[0];
                c[0] = nums[i];
            }
            else if(nums[i] < c[1]) {
                c[1] = nums[i];
            }
        }
        
        return c[3]*c[2] - c[0]*c[1];
    }
}
