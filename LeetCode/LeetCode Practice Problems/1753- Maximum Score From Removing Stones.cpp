class Solution {
public:
    int maximumScore(int a, int b, int c) {
        vector<int> x = {a,b,c};
        sort(x.begin(),x.end());
        
        
        int s1 = x[0] + x[1];
        int s2 = x[2];
        
        int ans = 0;
        
        if(s1 >= s2) {
            ans = s2 + (s1 - s2)/2;
        } else {
            ans = s1;
        }
        
        return ans;
    }
};
