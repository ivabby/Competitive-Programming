class Solution {
    public int[] sumZero(int n) {
        int val = n/2;
        int ans[] = new int[n];
        
        int i = 0 , j = n - 1;
        
        while(i <= j) {
            ans[i] = val;
            if(i != j) {
                ans[j] = -val;
            }
            val--;
            i++;
            j--;
        }
        
        return ans;
    }
}
