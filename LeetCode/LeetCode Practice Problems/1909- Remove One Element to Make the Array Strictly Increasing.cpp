class Solution {
public:
    bool canBeIncreasing(vector<int>& a) {
        int n = a.size();
        
        vector<bool> l(n,false),r(n,false);
        l[0] = true;
        r[n-1] = true;
        
        for(int i=1;i<n-1;i++) {
            if(a[i-1] < a[i]) {
                l[i] = l[i-1];
            } else {
                l[i] = false;
            }
        }
        
        for(int i=n-2;i>0;i--) {
            if(a[i] < a[i+1]) {
                r[i] = r[i+1];
            } else {
                r[i] = false;
            }
        }
        
        
        for(int i=0;i<n;i++) {
            if(i == 0) {
                if(r[i+1] == true) return true;
            }
            else if(i == n-1) {
                if(l[i-1] == true) return true;
            }
            else {
                if(l[i-1] && r[i+1] && a[i-1] < a[i+1]) return true;
            }
        }
        
        return false;
    }
};
