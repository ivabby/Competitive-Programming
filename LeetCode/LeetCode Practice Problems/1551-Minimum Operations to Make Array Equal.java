class Solution {
    public int minOperations(int n) {
        if((n&1) == 1) {
            return (n*n)/4;
        } else {
            int q = n/2;
            return q*q;
        }
    }
}
