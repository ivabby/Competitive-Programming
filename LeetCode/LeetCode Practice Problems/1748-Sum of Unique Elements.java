class Solution {
    public int sumOfUnique(int[] nums) {
        int freq[] = new int[110];
        
        for(int num: nums) {
            freq[num]++;
        }
        
        int ans = 0;
        for(int i=0;i<=100;i++) {
            ans += (freq[i] == 1)?i:0;
        }
        
        return ans;
    }
}
