class Solution {
public:
    int countSquares(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        int ans = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i == 0 || j == 0)
                {
                    ans += a[i][j];
                    continue;
                }
                if(a[i][j])
                {
                    int mini = min(a[i-1][j] , min(a[i-1][j-1] , a[i][j-1]));
                    a[i][j] += mini;
                }
                ans += a[i][j];
            }
        }
        
        return ans;
    }
};
