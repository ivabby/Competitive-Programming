class Solution {
    public int majorityElement(int[] nums) {
        int val = nums[0];
        int cnt = 0;
        
        for(int num: nums) {
            if(num == val) cnt++;
            else cnt--;
            
            if(cnt < 0) {
                cnt = 1;
                val = num;
            }
        }
        
        return val;
    }
}
