class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        
        int s1 = 0 , s2 = 0;
        int left = 0 , right = 0;
        
        for(int i=0;i<n;i++) {
            if(i < n/2) {
                if(num[i] == '?') s1++;
                else left += (num[i] - '0');
            } else {
                if(num[i] == '?') s2++;
                else right += (num[i] - '0');
            }
        }
        
        if((s1 + s2)%2 == 1) return true;
        
        int ans = left - right + (s1/2)*9 - (s2/2)*9;
        return ans != 0;
    }
};
