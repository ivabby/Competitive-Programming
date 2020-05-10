class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& a) {
        vector<int> b;
        int n = a.size();
        
        if(n == 0) return b;
        
        sort(a.begin() , a.end());
        
        vector<int> dp(n , 0) , pos(n , 0);
        dp[n-1] = 1;
        pos[n-1] = n-1;
        
        for(int i=n-2;i>=0;i--)
        {
            int maxm = 0 , nextPos = i;
            for(int j=n-1;j>i;j--)
                if(a[j]%a[i] == 0 && maxm < dp[j])
                {
                    maxm = dp[j];
                    nextPos = j;
                }
            
            dp[i] = maxm + 1;
            pos[i] = nextPos;
        }
        
        int maxi = dp[0] , p = 0;
        for(int i=0;i<n;i++)
        {
            if(maxi < dp[i])
            {
                maxi = dp[i];
                p = i;
            }
         }
        do{
            b.push_back(a[p]);
            if(p == pos[p])
                break;
            p = pos[p];
        } while(true);
        
        return b;
    }
};
