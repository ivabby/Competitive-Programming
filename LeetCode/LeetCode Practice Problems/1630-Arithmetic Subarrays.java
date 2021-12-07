class Solution {
    public List<Boolean> checkArithmeticSubarrays(int[] nums, int[] l, int[] r) {
        List<Boolean> ans = new ArrayList();
        
        for(int i=0;i<l.length;i++) {
            int sz = r[i] - l[i] + 1;
            int a[] = new int[sz];
            
            for(int j=l[i];j<=r[i];j++) {
                a[j - l[i]] = nums[j];
            }
            
            Arrays.sort(a);
            int val = a[1] - a[0];
            boolean f = true;
            
            for(int j=2;j<sz;j++) {
                if(a[j]-a[j-1] != val) {
                    f = false;
                    break;
                }
            }
            
            ans.add(f);
        }
        
        return ans;
    }
}
