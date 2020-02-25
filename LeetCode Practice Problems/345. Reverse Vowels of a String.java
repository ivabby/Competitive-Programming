class Solution {
    public String reverseVowels(String s) {
        String r = "";
        for(int i=0;i<s.length();i++)
        {
            char ch = s.charAt(i);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                r = ch + r;
        }
        
        String ss = "";
        int k = 0;
        for(int i=0;i<s.length();i++)
        {
            char ch = s.charAt(i);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                ss = ss + r.charAt(k);
                k++;
            }
            else
                ss = ss + s.charAt(i);
        }
        return ss;
    }
}
