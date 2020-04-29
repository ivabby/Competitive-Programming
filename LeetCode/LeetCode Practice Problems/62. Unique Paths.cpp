class Solution {
public:
    int uniquePaths(int m, int n) {
        int path[m][n] = {0};
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                path[i][j] = 0;
        
        path[0][0] = 1;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(i+1<m)
                    path[i+1][j]+=path[i][j];
                if(j+1<n)
                    path[i][j+1]+=path[i][j];
            }
        
        return path[m-1][n-1];
    }
};
