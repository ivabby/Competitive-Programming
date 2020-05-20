class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        int a[n];
        
        
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            a[i] = 1;
            for(int j=0;j<=i;j++)
            {
                if(nums[i] > nums[j])
                    a[i] = max(a[i] , a[j]  + 1);
            }
            maxi = max(maxi , a[i]);
        }
        
        return maxi;
    }
};
