class Solution {
public:
    string removeOccurrences(string s, string part) {
        for(int i=0;i<s.length() && i+part.length()<=s.length();) {
            string sub = s.substr(i , part.length());
            if(sub == part) {
                s = s.substr(0,i) + s.substr(i+part.length());
                i = 0;
            } else {
                i++;
            }
            
            if(s.length() == 0) break;
        }
        
        return s;
    }
};
