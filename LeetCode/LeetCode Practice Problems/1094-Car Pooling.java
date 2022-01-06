class Solution {
    public boolean carPooling(int[][] trips, int capacity) {
        int cnt[] = new int[1001];
        for(int trip[]: trips) {
            cnt[trip[1]] += trip[0];
            cnt[trip[2]] -= trip[0];
        }
        int cur = 0;
        for(int c: cnt) {
            cur += c;
            if(cur > capacity) {
                return false;
            }
        }
        return true;
    }
}
