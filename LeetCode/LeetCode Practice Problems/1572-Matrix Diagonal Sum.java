class Solution {
    public int diagonalSum(int[][] mat) {
        int n = mat.length;
        int ans = 0;
        
        for(int i=0;i<n;i++) {
            ans += mat[i][i];
        }
        
        int j = n-1;
        for(int i=0;i<n;i++,j--) {
            if(i != j) {
                ans += mat[i][j];
            }
        }
        
        return ans;
    }
}
