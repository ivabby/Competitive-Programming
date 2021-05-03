class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int l = start , r = start;
        int n = nums.size();
        int ans = -1;
        while(l>=0 || r<n) {
            if(l>=0 && nums[l] == target) {
                ans = abs(l-start); 
                break;
            }
            if(r<n && nums[r] == target) {
                ans = abs(r-start);
                break;
            }
            
            if(l >= 0) l--;
            if(r < n) r++;
        }
        
        return ans;
    }
};
