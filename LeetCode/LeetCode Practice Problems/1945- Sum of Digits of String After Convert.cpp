class Solution {
public:
    int getLucky(string s, int k) {
        int s1 = 0;
        
        for(char c: s) {
            int cur = (c - 'a') + 1;
            while(cur) {
                s1 += cur%10;
                cur/=10;
            }
        }
        k--;
        
        while(k--) {
            int cur = 0;
            while(s1) {
                cur += s1%10;
                s1/=10;
            }
            s1 = cur;
        }
        
        return s1;
    }
};
