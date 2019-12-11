class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            int target = nums[i];
            int l = i+1 , h = nums.size() - 1;
            while(l<h)
            {
                int s = target + nums[l] + nums[h];
                if(s<0)
                    l++;
                else if(s>0)
                    h--;
                else
                {
                    vector<int> a(3);
                    a[0] = nums[i];
                    a[1] = nums[l];
                    a[2] = nums[h];
                    ans.push_back(a);
                    
                    while(l<h && nums[l] == a[1]) l++;
                    while(h>l && nums[h] == a[2]) h--;
                }
            }
            while(i+1<nums.size() && nums[i+1] == nums[i])
                i++;
        }
        return ans;
    }
};
