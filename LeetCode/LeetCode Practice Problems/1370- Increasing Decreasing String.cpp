class Solution {
public:
    string sortString(string s) {
        string ans = "";
        int f[26];
        for(int i=0;i<26;i++)
            f[i] = 0;
        
        for(auto i : s)
            f[i - 'a']++;
        
        bool c = true;
        while(c)
        {
            c = false;
            for(int i=0;i<26;i++)
            {
                if(f[i])
                {
                    c = true;
                    ans = ans + (char)(i + 97);    
                    f[i]--;
                }
            }
            
            for(int i=25;i>=0;i--)
            {
                if(f[i])
                {
                    ans = ans + (char)(i + 97);
                    f[i]--;
                }
            }
        }
        return ans;
    }
};
