class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double mx = -1e9;
        
        int n = nums.size();
        int s = 0;
        int j = 0;
        
        
        for(int i=0;i<n;i++) {
            s += nums[i];
            
            
            if(i-k >= 0) {
                s -= nums[j];
                j++;
            }
            
            
            if(i-j+1 == k) {
                double avg = (double)s / (double) k;
                mx = max(mx , avg);
            }
        }
        
        return mx;
    }
};
