class Solution {
public:
    bool checkZeroOnes(string s) {
        
        int n = s.length();
        int one = 0 , zero = 0;
        
        for(int i=0;i<n;i++) {
            char ch = s[i];
            int cnt = 1;
            while(i+1<n && s[i+1] == ch) {
                cnt++,i++;
            }
            
            if(ch == '1') one = max(one,cnt);
            else zero = max(zero,cnt);
        }
        
        return one>zero;
    }
};
