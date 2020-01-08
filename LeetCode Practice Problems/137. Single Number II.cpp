class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i=0;i<n;)
        {
            int j = i;
            while(j+1<n && nums[j+1] == nums[i])
                j++;
            
            if(i == j)
                return nums[i];
            
            i = j+1;
        }
        return 0;
    }
};
