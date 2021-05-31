class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        
        int mx = 0;
        int n = nums.size();
        int j = n-1;
        for(int i=0;i<j;i++,j--) {
            mx = max(mx , nums[i] + nums[j]);
        }
        
        return mx;
    }
};
