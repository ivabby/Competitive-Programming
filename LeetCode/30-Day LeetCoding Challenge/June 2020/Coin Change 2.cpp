class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        
        vector<int> dp(amount + 1, -1);
        dp[0] = 1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=coins[i];j<=amount;j++)
            {
                if(dp[j - coins[i]] != -1)
                {
                    if(dp[j] == -1)
                        dp[j] = dp[j - coins[i]];
                    else
                        dp[j] += dp[j - coins[i]];
                }
            }
        }
        
        if(dp[amount] == -1)
            dp[amount] = 0;
        
        return dp[amount];
    }
};
