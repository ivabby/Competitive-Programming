class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0 , maxi = nums[0];
        
        for(int i=0;i<nums.size();i++)
        {
            if(ans + nums[i] > 0)
            {
                ans+=nums[i];
                maxi = max(maxi , ans);
            }
            else{
                ans = 0;
                maxi = max(maxi , nums[i]);
            }
        }
        
        return maxi;
    }
};
