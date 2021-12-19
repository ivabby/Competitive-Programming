class Solution {
    public boolean areNumbersAscending(String s) {
        int prevNum = -1;
        int n = s.length();
        
        for(int i=0;i<n;i++) {
            char ch = s.charAt(i);
            if(ch >= '0' && ch <= '9') {
                int val = ch - '0';
                while(i+1<n && Character.isDigit(s.charAt(i+1))) {
                    val = val * 10 + (s.charAt(i+1));
                    i++;
                }
                if(prevNum >= val) return false;
                prevNum = val;
            }
        }
        return true;
    }
}
