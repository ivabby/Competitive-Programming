class Solution {
    public int findJudge(int n, int[][] trust) {
        int src[] = new int[1001];
        int dest[] = new int[1001];
        for(int[] a: trust) {
            src[a[0]]++;
            dest[a[1]]++;
        }
        int ans = -1;
        for(int i=1;i<=1000;i++) {
            if(src[i] == 0 && dest[i] == n-1) {
                ans = i;
                break;
            } 
        }
        return ans;
    }
}
