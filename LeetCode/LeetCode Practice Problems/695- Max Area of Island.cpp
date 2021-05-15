class Solution {
public:
    int n,m;
    int ans = 0;
    int cur = 0;
    
    void find(vector<vector<int>>& grid,int i,int j) {
        if(i<0 || j<0 || i>=n || j>=m) {
            return;
        }
        
        if(grid[i][j]) {
            cur++;
            grid[i][j] = 0;
            
            find(grid,i+1,j);
            find(grid,i-1,j);
            find(grid,i,j+1);
            find(grid,i,j-1);
        }
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 1) {
                    cur = 0;
                    find(grid,i,j);
                    ans = max(ans , cur);
                }
            }
        }
        
        return ans;
    }
};
