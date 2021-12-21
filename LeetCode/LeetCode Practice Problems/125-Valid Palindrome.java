class Solution {
    public boolean isPalindrome(String s) {
        String st = "";
        s = s.toLowerCase();
        
        for(char ch: s.toCharArray()) {
            if((ch >='a' && ch<='z') || (ch >='0' && ch <= '9')) {
                st = st + ch;
            }
        }
        
        char c[] = st.toCharArray();
        int i = 0 , j = c.length - 1;
        while(i < j) {
            if(c[i] != c[j]) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
}
