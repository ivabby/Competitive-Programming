class Solution {
    public int bitwiseComplement(int n) {
        int ans = 0 , val = 1;
        if(n == 0) return 1;
        while(n > 0) {
            int rem = n%2;
            if(rem == 0) {
                ans = ans + val;
            }
            n >>= 1;
            val *= 2;
        }
        return ans;
    }
}
