class Solution {
public:
    int brokenCalc(int x, int y) {
        int ans = 0;
        
        while(y > x) {
            ans++;
            if(y%2 == 1)
                y++;
            else
                y/=2;
        }
        
        return ans + x - y;
    }
};
