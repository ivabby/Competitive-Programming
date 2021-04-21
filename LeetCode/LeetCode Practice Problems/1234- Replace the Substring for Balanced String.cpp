class Solution {
public:
    int index(char c) {
        if(c == 'Q') return 0;
        if(c == 'W') return 1;
        if(c == 'E') return 2;
        if(c == 'R') return 3;
        return -1;
    }
    bool check(vector<int> a) {
        for(auto i : a)
            if(i > 0)
                return false;
        
        return true;
    }
    int balancedString(string s) {
        vector<int> a(4,0);
        
        for(char c: s) {
            a[index(c)]++;
        }
        
        bool balanced = true;
        int mx = s.length()/4;
        
        for(int i=0;i<4;i++) {
            if(a[i] > mx) balanced = false;
            a[i] = max(0 , a[i] - mx);
        }
        
        if(balanced) return 0;
        
        int start = 0 , n = s.length() , ans = n;
        for(int end=0;end<n;end++) {
            a[index(s[end])]--;
            
            while(check(a)) {
                ans = min(ans , end - start + 1);
                
                a[index(s[start])]++;
                start++;
            }
        }
        
        
        return ans;
    }
};
