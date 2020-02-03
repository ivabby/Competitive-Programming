class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i+=2){
            int v = nums[i+1];
            int sz = nums[i];
            while(sz--)
                ans.push_back(v);
        }
        
        return ans;
    }
};
