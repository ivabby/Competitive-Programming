/**
    Using Counting Sort Technique
    Time Complexity - O(n)
    Space Complexity - O(1)
*/

class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        int rank = 0;
        int cnt = 0;
        
        for(int i=0;i<nums.length;i++) {
            if(nums[i] == target) cnt++;
            
            if(nums[i] < target) rank++;
        }
        
        List<Integer> ans = new ArrayList();
        
        while(cnt > 0) {
            ans.add(rank);
            rank++;
            cnt--;
        }
        
        return ans;
    }
}
