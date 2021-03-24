class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        
        if(n == 0 || n == 1) 
            return 0;
        
        int a[n+10];
        memset(a,0,sizeof a);
        
        for(int i=2;i*i<=n;i++) {
            if(a[i] == 0) {
                for(int j=i*i;j<=n;j+=i)
                    a[j] = 1;
            }
        }
        
        for(int i=2;i<n;i++)
            if(a[i] == 0)
                cnt++;
        
        
        return cnt;        
    }
};
