class Solution {
public:
    int minSideJumps(vector<int>& a) {
        int dp[] = {1,0,1};
        
        for(auto i: a) {
            if(i > 0) 
                dp[i-1] = 10000000;
            for(int j=0;j<3;j++) 
                if(i != j+1)
                    dp[j] = min(dp[j] , min(dp[(j+1)%3] , dp[(j+2)%3]) + 1);
        }
        
        return min(dp[0] , min(dp[1] , dp[2]));
    }
};
