class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd = 0 , even = 0;
        for(auto i:position) {
            if(i%2 == 0) even++;
            else odd++;
        }
        
        if(odd == 0 || even == 0)
            return 0;
        
        return min(odd,even);
    }
};
