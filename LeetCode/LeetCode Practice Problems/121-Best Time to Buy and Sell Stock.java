class Solution {
    public int maxProfit(int[] prices) {
        int ans = 0 , cur = prices[prices.length - 1];
        
        for(int i=prices.length-1;i>=0;i--) {
            ans = Math.max(ans , cur - prices[i]);
            cur = Math.max(cur , prices[i]);
        }
        
        return ans;
    }
}
