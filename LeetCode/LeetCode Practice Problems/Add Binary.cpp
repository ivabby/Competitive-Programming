class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int n1 = a.length() , n2 = b.length();
        int i = n1 - 1 , j = n2 - 1;
        int carry = 0;
        while(i>=0 || j>=0)
        {
            int s = 0;
            if(i>=0)
            {
                s = (a[i] - '0');
                i--;
            }
            if(j>=0)
            {
                s = s + (b[j] - '0');
                j--;
            }
            s = s + carry;
            if(s == 1 || s == 3)
                ans = "1" + ans;
            else
                ans = "0" + ans;
            
            if(s>1)
                carry = 1;
            else
                carry = 0;
        }
        if(carry == 1)
            ans = "1" + ans;
        return ans;
    }
};
