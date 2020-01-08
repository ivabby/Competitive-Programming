class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0) return 0;
        
        int mini[n] , maxi[n];
        for(int i=0;i<n;i++)
            mini[i] = INT_MAX , maxi[i] = INT_MIN;
        
        mini[0] = prices[0];
        for(int i=1;i<n;i++)
            mini[i] = min(mini[i-1] , prices[i]);
        
        maxi[n-1] = prices[n-1];
        for(int i=n-2;i>=0;i--)
            maxi[i] = max(maxi[i+1] , prices[i]);
        
        int c = 0;
        for(int i=0;i<n-1;i++)
        {
            c = max(c , maxi[i+1] - mini[i]);
        }
        
        return c;
    }
};
