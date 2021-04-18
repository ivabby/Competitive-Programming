class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int value = pow(2 , maximumBit) - 1;
        int n = nums.size();
        vector<int> ans;
        int cur = 0;
        for(auto i: nums) cur ^= i;
        
        for(int i=n-1;i>=0;i--) {
            int a = cur ^ value;
            ans.push_back(a);
            
            cur ^= nums[i];
        }
        
        
        return ans;
    }
};
