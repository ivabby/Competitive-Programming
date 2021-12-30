class Solution {
    public int divideNumber(int n,int m) {
        while(n%m == 0) {
            n /= m;
        }
        return n;
    }
    public boolean isUgly(int n) {
        if(n == 0) return false;
        n = divideNumber(n , 2);
        n = divideNumber(n , 3);
        n = divideNumber(n , 5);
        return n == 1;
    }
}
