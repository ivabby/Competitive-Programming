class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];
        int cur = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            cur = max(cur + nums[i] , nums[i]);
            maxi = max(maxi , cur);
        }
        return maxi;
    }
};
