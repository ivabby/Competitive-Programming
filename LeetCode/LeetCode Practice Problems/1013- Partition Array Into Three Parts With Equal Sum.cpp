class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int s = 0;
        for(auto i: arr) s+=i;
        
        if(s%3 != 0)
            return false;
        
        int cnt = 0;
        int cur = 0;
        for(auto i: arr) {
            
            cur += i;
            if(cur == s/3) {
                cnt++;
                cur = 0;
            }
        }
        
        return cnt >= 3;
    }
};
