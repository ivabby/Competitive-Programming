class Solution {
    public String reverseWords(String s) {
        String ans = "";
        String cur = "";
        for(char c: s.toCharArray()) {
            if(c != ' ') {
                cur = c + cur;
            } else {
                if(ans.length() > 0) {
                    ans = ans + " ";
                }
                ans = ans + cur;
                cur = "";
            }
        }
        
        if(cur.length() > 0) {
            if(ans.length() > 0) {
                ans = ans + " ";
            }
            ans = ans + cur;
        }
        
        return ans;
    }
}
