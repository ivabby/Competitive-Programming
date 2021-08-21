class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
        map<int,int> m;
        for(int i=0;i<n;i++) {
            m[a[i]]++;
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++) {
            ans += m[k - a[i]];
            
            if(k-a[i] == a[i]) ans--;
        }
        
        return ans/2;
    }
};
