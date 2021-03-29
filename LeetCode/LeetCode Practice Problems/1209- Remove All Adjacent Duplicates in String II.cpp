class Solution {
public:
    string removeDuplicates(string s, int k) {
        for(int i=0;i<s.length();) {
            int cnt = 1;
            int j = i;
            while(j+1<s.length() && cnt!=k && s[j] == s[j+1]) {
                cnt++;
                j++;
            }
            
            if(cnt == k) {
                s = s.substr(0,i) + s.substr(j+1);
                i = 0;
            } else {
                i++;
            }
        }
        
        return s;
    }
};
