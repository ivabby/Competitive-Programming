class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0;
        while(x>0 || y>0)
        {
            int v1 = x&1;
            int v2 = y&1;
            cnt += (v1 == v2)?0:1;
            x=x>>1;
            y=y>>1;
        }
        
        return cnt;
    }
};
