class Solution {  
    public String findSum(String s1,String s2) {
        String ans = "";
        int carry = 0;
        int p1 = s1.length() - 1 , p2 = s2.length() - 1;
        while(p1>=0 || p2>=0 || carry>0) {
            int sum = carry;
            if(p1 >= 0) {
                sum += (s1.charAt(p1) - '0');
                p1--;
            }
            if(p2 >= 0) {
                sum += (s2.charAt(p2) - '0');
                p2--;
            }
            carry = sum / 10;
            sum %= 10;
            ans = Integer.toString(sum) + ans;
        }
        return ans;
    }
    public String findMultiply(String s,int digit,int shift) {
        int carry = 0;
        String ans = "";
        while(shift > 0) {
            ans = ans + "0";
            shift--;
        }
        for(int i=s.length()-1;i>=0;i--) {
            int sum = carry + (s.charAt(i) - '0') * digit;
            carry = sum/10;
            sum %= 10;
            ans = Integer.toString(sum) + ans;
        }
        if(carry > 0) {
            ans = Integer.toString(carry) + ans;
        }
        return ans;
    }
    public String multiply(String num1, String num2) {
        String ans = "";
        if(num1.equals("0") || num2.equals("0")) {
            return "0";
        }
        int p1 = num1.length() - 1, p2 = num2.length() - 1;
        int carry = 0 , shift = 0;
        for(;p1>=0;p1--) {
            String num = findMultiply(num2,num1.charAt(p1) - '0',shift);
            ans = findSum(ans , num);
            shift++;
        }
        return ans;
    }
}
