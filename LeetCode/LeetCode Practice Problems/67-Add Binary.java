class Solution {
    public String addBinary(String a, String b) {
        int n1 = a.length() - 1;
        int n2 = b.length() - 1;
        String ans = "";
        int carry = 0;
        
        while(n1>=0 || n2>=0 || carry>0) {
            int sum = carry;
            if(n1 >= 0) {
                sum += (a.charAt(n1) - '0');
                n1--;
            }
            if(n2 >= 0) {
                sum += (b.charAt(n2) - '0');
                n2--;
            }
            
            if(sum > 1) {
                carry = 1;
                sum = (sum > 2)?1:0;
            } else {
                carry = 0;
            }
            
            ans = Integer.toString(sum) + ans;
        }
        
        return ans;
    }
}
