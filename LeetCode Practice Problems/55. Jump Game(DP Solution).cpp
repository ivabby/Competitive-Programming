class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool vis[nums.size()] = {false};
        vis[0] = true;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(vis[i])
                for(int j=i+1;j<=min(n-1,i+nums[i]);j++)
                {
                    vis[j] = true;
                }
        }
        
        return vis[nums.size()-1];
    }
};
