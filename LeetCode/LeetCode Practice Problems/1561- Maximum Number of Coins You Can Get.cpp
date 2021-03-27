class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans = 0;
        sort(piles.begin() , piles.end());
        
        int start = 0 , end = piles.size() - 1;
        
        while(start < end - 1) {
            ans += piles[end - 1];
            start++;
            end -= 2;
        }
        
        return ans;
    }
};
