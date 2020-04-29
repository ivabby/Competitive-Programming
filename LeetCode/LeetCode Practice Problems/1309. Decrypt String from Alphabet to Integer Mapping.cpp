class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        int n = s.length();
        for(int i=0;i<n;)
        {
            if(i+2<n && s[i+2] == '#')
            {
                int v = (s[i] - '0')*10 + (s[i+1] - '0') - 1;
                char ch = 'a' + v;
                ans+=ch;
                i+=3;
            }
            else
            {
                int v = s[i] - '0' - 1;
                char ch = 'a' + v;
                ans+=ch;
                i++;
            }
        }
        return ans;
    }
};
