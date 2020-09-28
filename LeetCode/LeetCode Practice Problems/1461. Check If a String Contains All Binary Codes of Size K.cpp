class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> a;
        int i = 0 , j = 0;
        int n = s.length();
        
        string st = "";
        while(j < k && j < n)
        {
            st = st + s[j];
            j++;
        }
        a.insert(st);        
        while(j < n)
        {
            st = st.substr(1) + s[j];
            j++;
            a.insert(st);
        }
        
        
        if(pow(2,k) == a.size())
            return true;
        return false;
    }
};
