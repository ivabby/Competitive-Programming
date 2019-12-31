class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        long long path[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                path[i][j] = 0;
        
        path[0][0] = (obstacleGrid[0][0] == 0)?1:0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(obstacleGrid[i][j] == 1)
                    continue;
                
                if(i+1<n && obstacleGrid[i+1][j] == 0)
                    path[i+1][j]+= path[i][j];
                if(j+1<m && obstacleGrid[i][j+1] == 0)
                    path[i][j+1]+=path[i][j];
            }
        
        return int(path[n-1][m-1]);
    }
};
