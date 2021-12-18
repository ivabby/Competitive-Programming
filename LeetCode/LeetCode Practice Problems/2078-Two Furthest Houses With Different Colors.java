class Solution {
    public int maxDistance(int[] colors) {
        int n = colors.length ,ans = 0;
        
        for(int i=0;i<n;i++) {
            for(int j=n-1;j>i;j--) {
                if(colors[i] != colors[j]) {
                    ans = Math.max(j-i , ans);
                    break;
                }
            }
        }
        
        return ans;
    }
}
