class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        
        for(int i=0;i<32;i++)
        {
            int s = 0;
            for(auto j : nums)
                if(j&(1 << i))
                    s++;
            
            s = s%3;
            if(s)
                ans = ans | (1<<i);
        }
        
        
        return ans;
    }
};
