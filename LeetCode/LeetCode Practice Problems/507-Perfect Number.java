class Solution {
    public boolean checkPerfectNumber(int num) {
        if(num == 1) return false;
        int sum = 1;
        for(int i=2;i*i<=num;i++) {
            if(num%i == 0) {
                int q = num/i;
                sum += i;
                if(q != i) {
                    sum += q;
                }
            }
        }
        return sum == num;
    }
}
