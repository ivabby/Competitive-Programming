class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;
        for(int i=1;i<=n;i++)
        {
            ans++;
            n-=i;
        }
        return ans;
    }
};
