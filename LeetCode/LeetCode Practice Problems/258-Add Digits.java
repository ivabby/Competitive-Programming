class Solution {
    public int addDigits(int num) {
        while(num > 9) {
            int s = 0;
            while(num > 0) {
                s += num%10;
                num /= 10;
            }
            num = s;
        }
        return num;
    }
}
