class Solution {
    public int countSegments(String s) {
        int cnt = 0;
        s = s + " ";
        String cur = "";
        for(char ch:s.toCharArray()) {
            if(ch == ' ') {
                if(cur.length() > 0) {
                    cnt++;
                }
                cur = "";
            } else {
                cur = cur + ch;
            }
        }
        return cnt;
    }
}   
