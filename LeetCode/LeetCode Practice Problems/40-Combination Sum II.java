class Solution {
    
    private void backtrack(List<List<Integer>> ans,List<Integer> res,int[] num,int start,int remain) {
        if(remain < 0) return;
        if(remain == 0) {
            ans.add(new ArrayList<>(res));
            return;
        }
        
        for(int i=start;i<num.length;i++) {
            if(i>start && num[i] == num[i-1]) continue;
            res.add(num[i]);
            backtrack(ans,res,num,i+1,remain-num[i]);
            res.remove(res.size() - 1);
        }
    }
    
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList();
        Arrays.sort(candidates);
        backtrack(ans,new ArrayList(),candidates,0,target);
        return ans;
    }
}
