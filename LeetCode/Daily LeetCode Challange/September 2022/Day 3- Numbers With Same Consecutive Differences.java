class Solution {
    private void numsSameConsecDiffHelper(int n,int k,int num,List<Integer> ans) {
        if(n == 0) {
            ans.add(num);
            return;
        }
        
        for(int i=0;i<=9;i++) {
            if(Math.abs(num%10 - i) == k)
                numsSameConsecDiffHelper(n-1,k,num*10+i,ans);
        }
    }
    public int[] numsSameConsecDiff(int n, int k) {
        List<Integer> ans = new ArrayList();
        
        for(int i=1;i<=9;i++) {
            numsSameConsecDiffHelper(n-1,k,i,ans);
        }
        
        return ans.stream().mapToInt(i -> i).toArray();
    }
}
