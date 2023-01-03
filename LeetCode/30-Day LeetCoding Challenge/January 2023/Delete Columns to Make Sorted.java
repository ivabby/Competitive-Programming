class Solution {
    public int minDeletionSize(String[] strs) {
        int n = strs.length;
        int m = strs[0].length();

        int ans = 0;
        for(int j=0;j<m;j++) {
            boolean isSorted = true;
            for(int i=1;i<n;i++) {
                if(strs[i-1].charAt(j) > strs[i].charAt(j)) {
                    isSorted = false;
                    break;
                }
            }
            if(!isSorted) ans++;
        }

        return ans;
    }
}
