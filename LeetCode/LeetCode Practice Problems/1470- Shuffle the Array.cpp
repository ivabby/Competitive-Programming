class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int j = 0;
        for(int i=0;i<n;i++) {
            ans[j] = nums[i];
            j += 2;
        }
        
        j = 1;
        for(int i=n;i<2*n;i++) {
            ans[j] = nums[i];
            j += 2;
        }
        
        return ans;
        
    }
};
