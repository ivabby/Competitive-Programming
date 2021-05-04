class Solution {
public:
    string add(string a,string b) {
        int n1 = a.length() - 1 , n2 = b.length() - 1;
        string s = "";
        
        int carry = 0;
        while(n1 >= 0 && n2 >= 0) {
            char c1 = a[n1];
            char c2 = b[n2];
            
            int sum = (c1-'0') + (c2 - '0') + carry;
            carry = sum/10;
            sum %= 10;
            s = to_string(sum) + s;
            
            n1--,n2--;
        }
        
        while(n1 >= 0) {
            char c1 = a[n1];
            int sum = (c1 - '0') + carry;
            carry = sum/10;
            sum%=10;
            s = to_string(sum) + s;
            n1--;
        }
        
        while(n2 >= 0) {
            char c2 = b[n2];
            int sum = (c2 - '0') + carry;
            carry = sum/10;
            sum%=10;
            s = to_string(sum) + s;
            n2--;
        }
        
        if(carry > 0) {
            s = to_string(carry) + s;
        }
        return s;
    }
    
    string multiply(int a,string b) {
        string ans = "";
        int carry = 0;
        
        for(int i=b.length()-1;i>=0;i--) {
            char c = b[i];
            int v = c - '0';
            
            int res = (v * a) + carry;
            carry = res / 10;
            res = res % 10;
            
            ans = to_string(res) + ans;
        }
        
        if(carry > 0) {
            ans = to_string(carry) + ans;
        }
        
        return ans;
    }
    
    string multiply(string a, string b) {
        
        int n1 = a.length() - 1 , n2 = b.length() - 1;
        string ans = "";
        
        
        while(n1 >= 0) {
            string cur = multiply(a[n1] - '0' , b);
            
            for(int i=n1;i+1<a.length();i++) {
                cur += '0';
            }
            
            ans = add(ans , cur);
            
            
            n1--;
        }
        
        string res = "";
        int i = 0;
        while(ans[i] == '0' && i < ans.length()) {
            i++;
        }
        
        ans = ans.substr(i);
        if(ans.length() == 0)
            ans = "0";
        
        return ans;
    }
};
