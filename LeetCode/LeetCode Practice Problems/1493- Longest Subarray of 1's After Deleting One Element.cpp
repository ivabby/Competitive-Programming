class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> l(n,0);
        vector<int> r(n,0);
        
        for(int i=0;i<n;i++) {
            if(nums[i] == 0) continue;
            if(i == 0) l[i] = 1;
            else l[i] = l[i-1] + 1;
        }
        
        for(int i=n-1;i>=0;i--) {
            if(nums[i] == 0) continue;
            if(i == n-1) r[i] = 1;
            else r[i] = r[i+1] + 1;
        }
        
        int mx = 0;
        for(int i=1;i<n-1;i++) {
            int val = 0;
            if(i!=0) {
                val += l[i-1];
            }
            if(i!=n-1) {
                val += r[i+1];
            }
            mx = max(mx , val);
        }
        
        return mx;
    }
};
