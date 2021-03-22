class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int mx = INT_MIN;
        
        nums.push_back(-1);
        
        int s = nums[0];
        mx = s;
        int i = 1 , n = nums.size();
        
        while(i < n) {
            if(nums[i] > nums[i-1]) {
                s += nums[i];
            } else {
                s = nums[i];
            }
            mx = max(s , mx);
            i++;
        }
        
        return mx;
        
    }
};
