class Solution {
    public int maxIncreaseKeepingSkyline(int[][] grid) {
        int ans = 0;
        int n = grid.length;
        int rmax[] = new int[n];
        int cmax[] = new int[n];
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                rmax[i] = Math.max(rmax[i] , grid[i][j]);
                cmax[i] = Math.max(cmax[i] , grid[j][i]);
            }
        }
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                ans += Math.min(rmax[i] , cmax[j]) - grid[i][j];
            }
        }
        
        return ans;
    }
}
