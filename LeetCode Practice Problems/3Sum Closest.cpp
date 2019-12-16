class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int maxi = nums[0] + nums[1] + nums[2];
        for(int i=0;i<nums.size()-2;i++)
        {
            int l = i+1 , h = nums.size()-1;
            while(l < h)
            {
                int sum = nums[i] + nums[l] + nums[h];
                if(sum > target)
                    h--;
                else
                    l++;
                if(abs(sum - target) < abs(target - maxi))
                    maxi = sum;
            }
        }
        return maxi;
    }
};
