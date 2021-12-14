class Solution {
    public String mergeAlternately(String word1, String word2) {
        int i = 0 , j = 0;
        int n1 = word1.length() , n2 = word2.length();
        String ans = "";
        
        while(i < n1 || j < n2) {
            if(i == n1) {
                ans = ans + word2.charAt(j);
                j++;
            }
            else if(j == n2) {
                ans = ans + word1.charAt(i);
                i++;
            }
            else {
                ans = ans + word1.charAt(i) + word2.charAt(j);
                i++;
                j++;
            }
        }
        
        return ans;
    }
}
