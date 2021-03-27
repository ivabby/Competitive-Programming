class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        
        int sz = l.size();
        for(int i=0;i<sz;i++) {
            int start = l[i];
            int end = r[i];
            
            vector<int> v;
            for(int j=start;j<=end;j++) {
                v.push_back(nums[j]);
            }
            
            sort(v.begin() , v.end());
            bool f = true;
            
            for(int j=2;j<v.size();j++) {
                if(v[j]-v[j-1] != v[1] - v[0]) {
                    f = false;
                    break;
                }
            }
            
            ans.push_back(f);
        }
        
        
        return ans;
    }
};
