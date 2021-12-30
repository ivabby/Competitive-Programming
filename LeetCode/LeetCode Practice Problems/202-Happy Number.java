class Solution {
    public long findSum(long n) {
        long s = 0;
        while(n > 0) {
            s += (n%10)*(n%10);
            n /= 10;
        }
        return s;
    }
    public boolean isHappy(long n) {
        Set<Long> set = new HashSet();
        while(n != 1) {
            long val = findSum(n);
            if(set.contains(val)) {
                return false;
            }
            set.add(val);
            n = val;
        }
        return true;
    }
}
