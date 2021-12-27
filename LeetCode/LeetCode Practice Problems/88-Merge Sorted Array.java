class Solution {
    public void merge(int[] a, int m, int[] b, int n) {
        int i = m-1, j = n-1, k = m+n-1;
        
        while(i>=0 && j>=0) {
            if(a[i] > b[j]) {
                a[k--] = a[i--];
            }
            else {
                a[k--] = b[j--];
            }
        }
        
        while(j >= 0) {
            a[k--] = b[j--];
        }
    }
}
