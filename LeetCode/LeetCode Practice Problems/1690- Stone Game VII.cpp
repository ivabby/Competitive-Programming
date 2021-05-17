class Solution {
public:
    int dp[1001][1001];
    int dfs(vector<int>& a,int i,int j,int s) {
        if(i == j)
            return 0;
        if(dp[i][j] == 0) {
            dp[i][j] = max(s - a[i] - dfs(a,i+1,j,s-a[i]) , s - a[j] -dfs(a,i,j-1,s-a[j]));
        }
        return dp[i][j];
    }
    
    int stoneGameVII(vector<int>& stones) {
        int s = 0 , n = stones.size();
        for(auto i: stones) {
            s += i;
        }
        
        return dfs(stones,0,n-1,s);
    }
};
