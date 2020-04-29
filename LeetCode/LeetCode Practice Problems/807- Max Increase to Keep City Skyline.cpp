class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        if(grid.size() == 0)
            return 0;
        vector<int> row(grid.size());
        vector<int> column(grid[0].size());
        
        for(int i=0;i<grid.size();i++)
        {
            int maxi = grid[i][0];
            for(int j=0;j<grid[i].size();j++)
                maxi = max(maxi , grid[i][j]);
            
            row[i] = maxi;
        }
        
        for(int j=0;j<grid[0].size();j++)
        {
            int maxi = grid[0][j];
            for(int i=0;i<grid.size();i++)
                maxi = max(maxi , grid[i][j]);
            
            column[j] = maxi;
        }
        
        int ans = 0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                ans = ans + min(row[i] , column[j]) - grid[i][j];
        
        return ans;
    }
};
