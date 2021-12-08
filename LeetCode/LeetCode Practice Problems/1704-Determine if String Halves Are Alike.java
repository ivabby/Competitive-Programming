class Solution {
    public boolean halvesAreAlike(String s) {
        String vowels = "aeiouAEIOU";
        int cnt1 = 0;
        int cnt2 = 0;
        int n = s.length();
        
        for(int i=0;i<n;i++) {
            char ch = s.charAt(i);
            if(vowels.contains(ch + "")) {
                if(i < n/2) cnt1++;
                else cnt2++;
            }
        }
        
        return cnt1 == cnt2;
    }
}
