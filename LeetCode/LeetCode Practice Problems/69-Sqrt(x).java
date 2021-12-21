class Solution {
    public int mySqrt(int x) {
        if(x == 0) return 0;
        int sq = 1;
        
        while(sq <= x/sq) {
            sq++;
        }
        return sq - 1;
    }
}
