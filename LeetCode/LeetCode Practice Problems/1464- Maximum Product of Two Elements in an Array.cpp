class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = 0;
        int n = nums.size();
        
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                mx = max(mx , (nums[i] - 1) * (nums[j] - 1));
            }
        }
        
        return mx;
    }
};
