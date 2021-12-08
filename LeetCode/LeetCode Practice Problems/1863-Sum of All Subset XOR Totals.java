class Solution {
    
    int ans = 0;
    
    public void findSum(int[] nums,int idx,int n,int s) {
        if(idx == n) {
            ans += s;
            return;
        }
        
        findSum(nums,idx+1,n,s);
        findSum(nums,idx+1,n,s^nums[idx]);
    }
    
    public int subsetXORSum(int[] nums) {
        findSum(nums,0,nums.length,0);
        
        return ans;
    }
}
