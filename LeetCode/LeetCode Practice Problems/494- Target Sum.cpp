class Solution {
public:
    int findTargetSumWays(vector<int>& a, int S) {
        int n = a.size();
        int dp[n][2001];
        
        for(int i=0;i<n;i++)
            for(int j=-1000;j<=1000;j++)
            {
                dp[i][j + 1000] = 0;
            }
        
        dp[0][a[0] + 1000] = 1;
        dp[0][-a[0] + 1000] += 1;
        for(int i=1;i<n;i++)
            for(int j=-1000;j<=1000;j++)
            {
                if(dp[i-1][j+1000] > 0)
                {
                    dp[i][j + a[i] + 1000] += dp[i-1][j + 1000];
                    dp[i][j - a[i] + 1000] += dp[i-1][j+1000];
                }
            }
        
        return (S > 1000)?0:dp[n-1][S+1000];
    }
};
