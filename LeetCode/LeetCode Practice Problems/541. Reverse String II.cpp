class Solution {
public:
    string reverseStr(string s, int k) {
        string ans = "";
        int n = s.length();
        
        
        for(int i=0;i<n;)
        {
            string rev = "";
            int j = i;
            while(j < min(n , i+k))
            {
                rev = s[j] + rev;
                j++;
            }
            ans = ans + rev;
            i = j;
            while(j < min(n , i+k))
            {
                ans += s[j];
                j++;
            }
            i = j;
        }
        
        return ans;
    }
};
