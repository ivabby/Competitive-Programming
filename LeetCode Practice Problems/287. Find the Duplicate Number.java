class Solution {
    public int findDuplicate(int[] a) {
        int n = a.length;
        for(int i=0;i<n;i++)
        {
            int v = Math.abs(a[i]) - 1;
            if(a[v] < 0)
                return Math.abs(a[i]);
            a[v] = -a[v];
        }
        
        return 0;
    }
}
