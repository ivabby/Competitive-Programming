class Solution {
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
        int ans = 0;
        for(int a: arr1) {
            ans++;
            for(int b: arr2) {
                if(Math.abs(a-b) <= d) {
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
}
