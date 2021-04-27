class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        int n = a.size();
        vector<int> b(k,0);
        
        int s = 0;
        b[0]++;
        int ans = 0;
        
        for(auto i: a) {
            s = (s + i)%k;
            if(s < 0)
                s += k;
            
            ans += b[s];
            b[s]++;
        }
        
        return ans;
    }
};
