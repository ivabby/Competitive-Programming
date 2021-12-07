class Solution {
    public int oddCells(int n, int m, int[][] indices) {
        int r[] = new int[n];
        int c[] = new int[m];
        
        for(int index[]: indices) {
            r[index[0]]++;
            c[index[1]]++;
        }
        
        int ans = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if((r[i] + c[j])%2 == 1) {
                    ans++;
                }
            }
        }
        
        return ans;
    }
}
