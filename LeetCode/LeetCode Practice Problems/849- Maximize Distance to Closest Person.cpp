class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        vector<int> l(n),r(n);
        
        int pos = -1;
        for(int i=0;i<n;i++) {
            if(seats[i] == 1) {
                pos = i;
            }
            
            l[i] = pos;
        }
        
        pos = n;
        for(int i=n-1;i>=0;i--) {
            if(seats[i] == 1) {
                pos = i;
            }
            
            r[i] = pos;
        }
        
        int mx = 0;
        for(int i=0;i<n;i++) {
            int left = i , right = 30000;
            if(l[i] != -1) {
                left = l[i];
            }
            if(r[i] != n) {
                right = r[i];
            }
            
            if(left != i && right != 30000) {
                mx = max(mx , min(i-left , right-i));
            }
            else if(left != i) {
                mx = max(mx , i-left);
            }
            else if(right != 30000) {
                mx = max(mx , right - i);
            }
        }
        
        return mx;
    }
};
