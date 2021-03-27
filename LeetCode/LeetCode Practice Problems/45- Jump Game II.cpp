class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n,INT_MAX);
        
        a[0] = 0;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<=min(n-1,i+nums[i]);j++) {
                a[j] = min(a[j] , a[i] + 1);
            }
        }
        
        
        return a[n-1];
        
    }
};
