class Solution {
    public int[][] matrixReshape(int[][] a, int r, int c) {
        int n = a.length,m = a[0].length;
        if(m*n != r*c) {
            return a;
        }
        int row = 0 , col = 0;
        int ans[][] = new int[r][c];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                ans[row][col] = a[i][j];
                col++;
                if(col == c) {
                    col = 0;
                    row++;
                }
            }
        }
        return ans;
    }
}
