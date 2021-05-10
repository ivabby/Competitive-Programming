class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans = 1 , cnt = 1;
        int n = nums.size();
        for(int i=1;i<n;i++) {
            if(nums[i] > nums[i-1]) {
                cnt++;
            } else {
                cnt = 1;
            }
            
            ans = max(ans , cnt);
        }
        
        return ans;
    }
};
