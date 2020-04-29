class Solution {
    public int islandPerimeter(int[][] grid) {
        int cnt = 0;
        int n = grid.length , m = grid[0].length;
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j] == 1)
                {
                    int v = 4;
                    if(i != 0 && grid[i-1][j] == 1)
                        v--;
                    if(i+1 != n && grid[i+1][j] == 1)
                        v--;
                    if(j!=0 && grid[i][j-1] == 1)
                        v--;
                    if(j+1 != m && grid[i][j+1] == 1)
                        v--;
                    cnt+=v;
                }
        
        return cnt;
    }
}
