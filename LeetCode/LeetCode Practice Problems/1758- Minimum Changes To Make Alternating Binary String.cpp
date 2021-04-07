class Solution {
public:
    int minOperations(string s) {
        int ans1 = 0 , ans2 = 0;
        int n = s.length();
        
        for(int i=0;i<n;i++) {
            if(i%2 == 0) {
                if(s[i] == '1') ans2++;
                else ans1++;
            } else {
                if(s[i] == '1') ans1++;
                else ans2++;
            }
        }
        
        return min(ans1,ans2);
    }
};
