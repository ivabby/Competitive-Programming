class Solution {
public:
    int arraySign(vector<int>& nums) {
        int p = 0 , n = 0;
        for(auto i : nums) {
            if(i == 0)
                return 0;
            if(i > 0)
                p++;
            else
                n++;
        }
        
        return (n%2 == 0)?1:-1;
    }
};
