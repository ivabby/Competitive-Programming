class Solution {
public:
    int secondHighest(string s) {
        
        vector<char> ss;
        
        for(int i=0;i<s.size();i++) {
            char ch = s[i];
            if(ch>='0' && ch<='9') {
                if(find(ss.begin(),ss.end(),ch) == ss.end())
                    ss.push_back(ch);
            }
        }
        
        sort(ss.begin() , ss.end());
        
        return (ss.size()>=2)?(ss[ss.size()-2] - '0'):-1;
        
    }
};
