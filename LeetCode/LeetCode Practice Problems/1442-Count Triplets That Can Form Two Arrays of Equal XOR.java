class Solution {
    public int countTriplets(int[] a) {
        int n = a.length + 1;
        int p[] = new int[n];
        
        for(int i=1;i<n;i++) {
            p[i] = p[i-1] ^ a[i-1];
        }
        
        int ans = 0;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(p[i] == p[j]) {
                    ans += j - i - 1;
                }
            }
        }
        
        return ans;
    }
}
