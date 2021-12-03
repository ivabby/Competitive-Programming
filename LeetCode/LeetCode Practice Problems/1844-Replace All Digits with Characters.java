class Solution {
    public String replaceDigits(String s) {
        String ans = "";
        
        int n = s.length();
        
        for(int i=0;i<n;) {
            if(s.charAt(i)>='0' && s.charAt(i)<='9') {
                int num = 0;
                int prev = i-1;
                
                while(i<n && s.charAt(i)>='0' && s.charAt(i)<='9') {
                    num = num*10 + (s.charAt(i) - '0');
                    i++;
                }
                
                ans = ans + (char)((int)s.charAt(prev) + num);
            } else {
                ans = ans + s.charAt(i);
                i++;
            }
        }
        
        return ans;
    }
}
