class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        n-=1;
        while(n--)
        {
            string b = "";
            for(int i=0;i<s.length();)
            {
                int j = i;
                while(j+1<s.length() && s[j+1] == s[j])
                    j++;
                b = b + to_string(j-i+1) + s[i];
                i = j+1;
            }
            s = b;
            cout<<s<<"\n";
        }
        return s;
    }
};
