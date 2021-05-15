class Solution {
public:
    int binaryGap(int n) {
        vector<int> a;
        
        while(n) {
            int rem = n%2;
            a.push_back(rem);
            
            n/=2;
        }
        int ans = 0;
        int prev = -1;
        
        for(int i=0;i<a.size();i++) {
            if(a[i] == 1) {
                if(prev != -1) {
                    ans = max(ans , i-prev);
                }
                prev = i;
            }
        }
        
        
        return ans;
    }
};
