class Solution {
public:
    string longestCommonPrefix(vector<string>& st) {
        if(st.size() == 0) return "";
        string p = st[0];
        for(int i=1;i<st.size();i++)
        {
            int k = 0;
            string s = "";
            while(k<p.length() && k<st[i].length() && p[k] == st[i][k])
            {
                s+=p[k];
                k++;
            }
            if(s == "") return "";
            p = s;
        }
        return p;
    }
};
