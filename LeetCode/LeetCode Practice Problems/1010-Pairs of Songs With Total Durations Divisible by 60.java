class Solution {
    public int numPairsDivisibleBy60(int[] time) {
        int cnt[] = new int[60];
        for(int t: time) {
            cnt[t%60]++;
        }
        int ans = cnt[0] * (cnt[0] - 1)/2 + cnt[30] * (cnt[30] - 1)/2;
        int i = 1 , j = 59;
        while(i < j) {
            ans += cnt[i] * cnt[j];
            i++;
            j--;
        }
        return ans;
    }
}
