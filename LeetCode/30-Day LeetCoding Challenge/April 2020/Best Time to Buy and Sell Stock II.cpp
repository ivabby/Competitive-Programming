class Solution {
public:
    int maxProfit(vector<int>& a) {
        int ans = 0;
        int n = a.size();
        
        for(int i=0;i<n;i++)
        {
            ans -= a[i];
            while(i+1<n && a[i+1]>=a[i])
                i++;
            ans += a[i];
        }
        
        return ans;
    }
};
