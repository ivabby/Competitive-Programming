class Solution {
    public int titleToNumber(String columnTitle) {
        int n = columnTitle.length();
        int ans = 0;
        int p = 1;
        
        for(int i=n-1;i>=0;i--) {
            int val = (columnTitle.charAt(i) - 'A') + 1;
            ans = ans + val * p;
            p *= 26;
        }
        
        return ans;
    }
}
