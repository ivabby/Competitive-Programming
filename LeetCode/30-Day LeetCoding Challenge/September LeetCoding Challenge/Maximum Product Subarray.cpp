class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        
        int maxVal = nums[0] , minVal = nums[0];
        int ans = nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i] < 0)
                swap(maxVal , minVal);
            
            maxVal = max(nums[i] , maxVal * nums[i]);
            minVal = min(nums[i] , minVal * nums[i]);
            
            ans = max(ans , maxVal);
        }
        
        return ans;
    }
};
