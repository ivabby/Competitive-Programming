class Solution {
    public String truncateSentence(String s, int k) {
        s += " ";
        String ans = "";
        String cur = "";
        
        for(char c: s.toCharArray()) {
            if(c != ' ') {
                cur += c;
            } else {
                k--;
                if(ans.length() != 0) ans += " ";
                ans += cur;
                cur = "";
            }
            
            if(k == 0) break;
        }
        
        return ans;
    }
}
