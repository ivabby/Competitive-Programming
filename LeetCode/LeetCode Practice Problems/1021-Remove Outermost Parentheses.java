class Solution {
    public String removeOuterParentheses(String s) {
        String ans = "";
        char ch[] = s.toCharArray();
        int n = ch.length;
        
        for(int i=0;i<n;) {
            if(ch[i] == '(') {
                int cnt = 1;
                i++;
                while(i<n) {
                    if(ch[i] == ')' && cnt == 1) {
                        break;
                    }
                    if(ch[i] == '(') {
                        cnt++;
                    } else {
                        cnt--;
                    }
                    ans = ans + ch[i];
                    i++;
                }
                i++;
                
            } else {
                i++;
            }
        }
        
        return ans;
    }
}
