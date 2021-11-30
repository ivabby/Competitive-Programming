class Solution {
    public int countKDifference(int[] nums, int k) {
        int cnt[] = new int[101];
        
        for(int i=0;i<nums.length;i++) {
            cnt[nums[i]]++;
        }
        
        int ans = 0;
        for(int i=1;i+k<=100;i++) {
            if(cnt[i]>0 && cnt[i+k]>0) {
                ans += (cnt[i] * cnt[i+k]);
            }
        }
        
        return ans;
    }
}
