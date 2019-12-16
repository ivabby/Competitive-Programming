class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> a;
        if(nums.size() < 4)
            return a;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for(int i=0;i<n-3;i++)
        {
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                int l = j+1 , h = n-1;
                while(l<h)
                {
                    int sum = nums[i] + nums[j] + nums[l] + nums[h];
                    if(sum > target)
                        h--;
                    else if(sum < target)
                        l++;
                    else
                    {
                        a.push_back(vector<int>{nums[i] , nums[j] , nums[l] , nums[h]});
                        do{
                            l++;
                        }while(nums[l-1] == nums[l] && l<h);
                        do{
                            h--;
                        }while(nums[h+1] == nums[h] && l<h);
                    }
                }
            }
        }
        return a;
    }
};
