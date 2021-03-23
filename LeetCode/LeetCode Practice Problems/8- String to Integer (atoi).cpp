class Solution {
public:
    int myAtoi(string s) {
        string a = "";
        int n = s.length();
        int i = 0;
        long mx = 2147483648;
        
        
        //  Step 1 - Check for spaces
        while(i<n && s[i] == ' ') {
            i++;
        }
        
        long num = 0;
        int sign = 0;
        
        // Step 2 - Read the + or -
        if(s[i]>='0' && s[i]<='9') {
             num = (s[i] - '0');
        } else if(s[i] == '-') {
            sign = 1;
        } else if(s[i] != '+') {
            return 0;
        }
        
        i++;
        
        
        
        //  Step 3 - Read the numbers if any
        while(i<n && (s[i]>='0' && s[i]<='9')) {
            
            
            num = num*10 + (s[i] - '0');
            if(sign) {
                if(num > mx) {
                    return -mx;
                }
            } else {
                if(num >= mx) {
                    return mx - 1;
                }
            }

            i++;
        }
        
        if(sign) return -num;
        else return num;
    }
};
