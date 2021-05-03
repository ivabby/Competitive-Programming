class Solution {
public:
    bool checkOnesSegment(string s) {
        int cnt = 0;
        int n = s.length();
        
        for(int i=0;i<n;i++) {
            if(s[i] == '1') {
                cnt++;
                while(i+1<n && s[i+1] == '1') {
                    i++;
                }
            }
        }
        
        return cnt <= 1;
        
    }
};
