class Solution {
    public int jump(int[] nums) {
        int jumps = 0, nextJump = 0, prevJump = 0;
        for(int i=0;i<nums.length;i++) {
            nextJump = Math.max(nextJump , nums[i] + i);
            if(i == prevJump && i!=nums.length-1) {
                System.out.println(i);
                prevJump = nextJump;
                jumps++;
            }
        }
        
        return jumps;
    }
}
