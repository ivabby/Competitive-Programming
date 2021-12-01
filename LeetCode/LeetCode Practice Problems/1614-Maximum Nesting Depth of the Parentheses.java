class Solution {
    public int maxDepth(String s) {
        int ans = 0;
        int cur = 0;
        
        for(char c: s.toCharArray()) {
            if(c == '(') {
                cur++;
                ans = Math.max(ans , cur);
            } else if(c == ')') {
                cur--;
            }
        }
        
        return ans;
    }
}
