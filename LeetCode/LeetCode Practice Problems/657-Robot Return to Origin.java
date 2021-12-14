class Solution {
    public boolean judgeCircle(String moves) {
        int c1 = 0 , c2 = 0;
        
        for(char c: moves.toCharArray()) {
            if(c == 'U') c1++;
            else if(c == 'D') c1--;
            else if(c == 'L') c2++;
            else c2--;
        }
        
        return c1 == 0 && c2 == 0;
    }
}
