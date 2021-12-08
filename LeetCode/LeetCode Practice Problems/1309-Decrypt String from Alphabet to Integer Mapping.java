class Solution {
    public String freqAlphabets(String s) {
        int n = s.length();
        char ch[] = s.toCharArray();
        String ans = "";
        
        for(int i=0;i<n;) {
            if(i+2 < n && ch[i+2] == '#') {
                int val = (ch[i] - '0')*10 + (ch[i+1] - '0') - 1;
                ans = ans + (char)(val + 'a');
                i += 3;
            } else {
                int val = (ch[i] - '0') - 1;
                ans = ans + (char)(val + 'a');
                i++;
            }
        }
        
        return ans;
    }
}
