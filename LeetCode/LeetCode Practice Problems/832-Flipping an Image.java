class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int n = image.length;
        
        for(int i=0;i<n;i++) {
            int c1 = 0 , c2 = n-1;
            
            while(c1 <= c2) {
                if(c1 == c2) {
                    image[i][c1] ^= 1;
                } else {
                    int u = image[i][c1];
                    int v = image[i][c2];
                    
                    image[i][c1] = v ^ 1;
                    image[i][c2] = u ^ 1;
                }
                c1++;
                c2--;
            }
        }
        
        return image;
    }
}
