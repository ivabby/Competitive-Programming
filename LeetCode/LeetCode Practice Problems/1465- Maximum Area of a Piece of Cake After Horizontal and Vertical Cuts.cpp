class Solution {
public:
    int maxArea(int h, int w, vector<int>& a, vector<int>& b) {
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        
        int mxa = max(a[0] , h-a[a.size()-1]);
        int mxb = max(b[0] , w-b[b.size() - 1]);
        
        for(int i=0;i<a.size()-1;i++) {
            mxa = max(mxa , a[i+1] - a[i]);
        }
        
        for(int i=0;i<b.size()-1;i++) {
            mxb = max(mxb , b[i+1] - b[i]);
        }
        
        long mod = (long)1e9 +7;
        
        return (mxa%mod*mxb%mod)%mod;
    }
};
