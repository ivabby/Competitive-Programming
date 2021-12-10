class Solution {
    public String generateTheString(int n) {
        String ans = "";
        int cnt = (n%2 == 1)?n:n-1;
        
        for(int i=1;i<=cnt;i++) ans = ans + "a";
        
        if(cnt < n) ans = ans + "b";
        return ans;
        
    }
}
