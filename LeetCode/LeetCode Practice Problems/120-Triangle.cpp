class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        
        vector<int> dp(n,INT_MAX);
        dp[0] = triangle[0][0];
        vector<int> prev;
        
        for(int i=1;i<n;i++)
        {
            prev = dp;
            for(int j=0;j<triangle[i].size();j++)
            {
                dp[j] = ((j>=1)?min(prev[j-1] , prev[j]) : prev[j]) + triangle[i][j];
            }
        }
        return *min_element(dp.begin() , dp.end());
    }
};
