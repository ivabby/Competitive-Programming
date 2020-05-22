class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int s = 0;
        for(auto i : nums)
            s += i;
        
        //  If sum of array is odd it cannot be partition into 2 equal parts
        if((s&1) == 1)
            return false;
        
        int n = nums.size();
        s /= 2;
        bool dp[n+1][s+1];
        
        //  Initialize dp array
        for(int i=0;i<=n;i++)
            for(int j=0;j<=s;j++)
            {
                if(j == 0)
                    dp[i][j] = true;
                else
                    dp[i][j] = false;
            }
        
        for(int i=1;i<=n;i++)
            for(int j=1;j<=s;j++)
            {
                if(nums[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        
        return dp[n][s];
    }
};
