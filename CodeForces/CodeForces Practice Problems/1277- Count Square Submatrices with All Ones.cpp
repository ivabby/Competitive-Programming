class Solution {
public:
    int countSquares(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        int ans = 0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i == 0 || j == 0)
                {
                    ans+=a[i][j];
                    continue;
                }
                if(a[i][j])
                {
                    int mini = min(min(a[i][j-1] , a[i-1][j]) , a[i-1][j-1]);
                    a[i][j]+=mini;
                }
                ans+=a[i][j];
            }
        }
        
        
        return ans;
    }
};
