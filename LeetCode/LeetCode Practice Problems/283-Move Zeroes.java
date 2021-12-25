class Solution {
    public void moveZeroes(int[] nums) {
        int i = 0;
        for(int j=0;j<nums.length;j++) {
            if(nums[j] == 0) continue;
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            i++;
        }
    }
}
