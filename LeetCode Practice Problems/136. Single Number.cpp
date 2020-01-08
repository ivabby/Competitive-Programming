class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i=0;i<n;)
        {
            int j = i;
            bool flag = true;
            while(j+1<n && nums[j+1] == nums[i])
            {
                flag = false;
                j++;
            }
            i = j;
            if(flag)
                return nums[i];
            i++;
        }
        return 0;
    }
};
