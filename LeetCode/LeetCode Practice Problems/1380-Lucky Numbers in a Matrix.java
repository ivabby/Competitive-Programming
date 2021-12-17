class Solution {
    public List<Integer> luckyNumbers (int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        
        int r[] = new int[n];
        int c[] = new int[m];
        
        Arrays.fill(r , Integer.MAX_VALUE);
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                r[i] = Math.min(r[i] , matrix[i][j]);
                c[j] = Math.max(c[j] , matrix[i][j]);
            }
        }
        
        List<Integer> ans = new ArrayList();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) 
                if(r[i] == matrix[i][j] && r[i] == c[j]) {
                    ans.add(matrix[i][j]);
                }
        }
        
        return ans;
    }
}
