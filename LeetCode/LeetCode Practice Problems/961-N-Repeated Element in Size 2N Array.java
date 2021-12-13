class Solution {
    public int repeatedNTimes(int[] nums) {
        int cnt[] = new int[11000];
        int ans = 0;
        int n = nums.length;
        
        for(int num: nums) {
            cnt[num]++;
            if(cnt[num] == n/2) {
                ans = num;
            }
        }
        
        return ans;
    }
}
