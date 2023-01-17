class Solution {
    public int minFlipsMonoIncr(String s) {
        int n = s.length();
        int one = 0;

        for(char ch: s.toCharArray()) 
            if(ch == '1') one++;

        int ans = n - one;
        int cntToZero = 0;
        for(int i=0;i<n;i++) {
            if(s.charAt(i) == '1') { 
                one--;
                cntToZero++;
            }
            int cntToOne = n - one - i - 1;
            ans = Math.min(ans , cntToOne + cntToZero);
        }

        return ans;
    }
}
