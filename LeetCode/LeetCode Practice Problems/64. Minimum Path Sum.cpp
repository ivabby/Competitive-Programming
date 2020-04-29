class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        long long path[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                path[i][j] = LONG_MAX;
        
        path[0][0] = grid[0][0];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(i+1<n)
                    path[i+1][j] = min(path[i+1][j] , path[i][j] + grid[i+1][j]);
                if(j+1<m)
                    path[i][j+1] = min(path[i][j+1] , path[i][j] + grid[i][j+1]);
            }
        
        return int(path[n-1][m-1]);
    }
};
