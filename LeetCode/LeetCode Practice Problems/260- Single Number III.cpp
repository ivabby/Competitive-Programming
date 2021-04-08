class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long x = 0;
        for(auto i:nums) {
            x ^= i;
        }
        
        // Finding the last set bet in a^b
        x = (x & (x-1)) ^ x;
        
        vector<int> res = {0,0};
        for(auto i: nums) {
            if((i&x) == 0) {
                res[0] ^= i;
            } else {
                res[1] ^= i;
            }
        }
        
        return res;
    }
};
