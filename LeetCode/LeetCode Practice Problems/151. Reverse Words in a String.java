class Solution {
    public String reverseWords(String s) {
        s = s.trim();
        String st[] = s.split(" ");
        String ans = "";
        int n = st.length;
        for(int i=n-1;i>=0;i--)
        {
            st[i] = st[i].trim();
            if(st[i].length() == 0) continue;
            ans = ans + st[i].trim();
            if(i != 0)
                ans = ans + " ";
        }
        return ans;
    }
}
