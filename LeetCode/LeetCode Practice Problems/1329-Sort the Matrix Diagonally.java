class Solution {
    
    public int[][] diagonalSort(int[][] a) {
        int n = a.length;
        int m = a[0].length;
        
        for(int j=0;j<m;j++) {
            
            int r = 0 , c = j;
            List<Integer> b = new ArrayList();
            int idx = 0;
            
            while(r<n && c<m) {
                b.add(a[r][c]);
                r++;
                c++;
            }
            
            Collections.sort(b);
            r = 0;
            c = j;
            
            while(r<n && c<m) {
                a[r][c] = b.get(idx);
                idx++;
                r++;
                c++;
            }
        }
        
        for(int i=1;i<n;i++) {
            int r = i , c = 0;
            List<Integer> b = new ArrayList();
            int idx = 0;
            
            while(r<n && c<m) {
                b.add(a[r][c]);
                r++;
                c++;
            }
            
            Collections.sort(b);
            r = i;
            c = 0;
            
            while(r<n && c<m) {
                a[r][c] = b.get(idx);
                idx++;
                r++;
                c++;
            }
        }
        
        return a;
    }
}
