class Solution {
    
    private void backtrack(List<List<Integer>> ans,List<Integer> res,int[] nums,int remain,int start) {
        if(remain < 0) return;
        if(remain == 0) {
            ans.add(new ArrayList<>(res));
            return;
        }
        for(int i=start;i<nums.length;i++) {
            res.add(nums[i]);
            backtrack(ans,res,nums,remain - nums[i],i);
            res.remove(res.size() - 1);
        }
    }
    
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList();
        Arrays.sort(candidates);
        backtrack(ans,new ArrayList(),candidates,target,0);
        return ans;
    }
}
