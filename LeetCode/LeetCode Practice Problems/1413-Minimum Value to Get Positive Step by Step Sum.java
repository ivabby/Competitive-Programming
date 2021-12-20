class Solution {
    public int minStartValue(int[] nums) {
        int mn = 0 , cur = 0;
        
        for(int num: nums) {
            cur += num;
            mn = Math.min(mn , cur);
        }
        
        return -mn + 1;
    }
}
