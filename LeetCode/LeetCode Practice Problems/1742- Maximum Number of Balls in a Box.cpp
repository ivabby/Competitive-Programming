class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int,int> m;
        int mx = 0;
        
        for(int i=lowLimit;i<=highLimit;i++) {
            int j = i;
            int s = 0;
            while(j > 0) {
                s+=j%10;
                j/=10;
            }
            
            m[s]++;
            mx = max(mx , m[s]);
        }
        
        return mx;
    }
};
