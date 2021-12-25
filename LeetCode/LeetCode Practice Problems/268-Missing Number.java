class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int target = n * (n + 1)/2;
        int cur = 0;
        
        for(int num: nums) {
            cur += num;
        }
        return target - cur;
    }
}
