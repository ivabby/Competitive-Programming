class Solution {
    public int hammingDistance(int x, int y) {
        int ans = 0;
        while(x>0 || y>0) {
            if((x&1) != (y&1)) {
                ans++;
            }
            x >>= 1;
            y >>= 1;
        }
        
        return ans;
    }
}
