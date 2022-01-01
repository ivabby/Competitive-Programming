class Solution {
    public int maxCoins(int[] nums) {
        int dp[][] = new int[nums.length][nums.length];
        return findCoin(nums,0,nums.length-1,dp);
    }
    public int findCoin(int nums[],int start,int end,int[][] dp) {
        if(start > end) {
            return 0;
        }
        if(dp[start][end] != 0) {
            return dp[start][end];
        }
        int mx = nums[start];
        for(int i=start;i<=end;i++) {
            int val = findCoin(nums,start,i-1,dp) + get(nums,start-1) * get(nums,i) * get(nums,end+1) + findCoin(nums,i+1,end,dp);
            mx = Math.max(mx , val);
        }
        dp[start][end] = mx;
        return mx;
    }
    public int get(int[] nums,int i) {
        if(i == -1 || i == nums.length) {
            return 1;
        }
        return nums[i];
    }
}
