class Solution {
    public int cherryPickup(int[][] grid) {
        int n = grid.length , m = grid[0].length;
        int[][][] dpCache = new int[n][m][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                for(int k=0;k<m;k++)
                    dpCache[i][j][k] = -1;
        return dp(0,0,m-1,grid,dpCache);
    }
    public int dp(int row,int col1,int col2,int[][] grid,int[][][] dpCache) {
        if(col1<0 || col1>=grid[0].length || col2<0 || col2>=grid[0].length) {
            return 0;
        }
        if(dpCache[row][col1][col2] != -1) {
            return dpCache[row][col1][col2];
        }
        int result = 0;
        result += grid[row][col1];
        if(col1 != col2) {
            result += grid[row][col2];
        }
        
        if(row != grid.length - 1) {
            int mx = 0;
            for(int newCol1=col1-1;newCol1<=col1+1;newCol1++) {
                for(int newCol2=col2-1;newCol2<=col2+1;newCol2++) {
                    mx = Math.max(mx , dp(row+1,newCol1,newCol2,grid,dpCache));
                }
            }
            result += mx;
        }
        dpCache[row][col1][col2] = result;
        return result;
    }
}
