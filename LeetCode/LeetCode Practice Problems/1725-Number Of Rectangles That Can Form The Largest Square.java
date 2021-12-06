class Solution {
    public int countGoodRectangles(int[][] rectangles) {
        int mx = 0;
        int cnt = 0;
        
        for(int rectangle[]:rectangles) {
            int mn = Math.min(rectangle[0], rectangle[1]);
            
            if(mx < mn) {
                mx = mn;
                cnt = 0;
            }
            
            if(mx == mn) {
                cnt++;
            }
        }
        
        return cnt;
    }
}
