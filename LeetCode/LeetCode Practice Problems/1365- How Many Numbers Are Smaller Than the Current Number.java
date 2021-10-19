class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int cnt[] = new int[101];
        
        for(int i=0;i<nums.length;i++) {
            cnt[nums[i]]++;
        }
        
        for(int i=1;i<101;i++) {
            cnt[i] += cnt[i-1];
        }
        
        for(int i=0;i<nums.length;i++) {
            nums[i] = (nums[i] == 0)?0:cnt[nums[i] - 1];
        }
        
        return nums;
    }
}
