class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0;i<n;i++) {
            if(i == 0) {
                if(i+1 == n) {
                    return 0;
                } else if(nums[i+1] < nums[i]) {
                    return i;
                }
            }
            else if(i == n-1) {
                if(nums[i-1] < nums[i]) {
                    return i;
                }
            } else {
                if(nums[i-1] < nums[i] && nums[i] > nums[i+1]) {
                    return i;
                }
            }
        }
        
        return 0;
    }
};
