class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n = nums.size();
        int cur = 0 , s = 0;
        
        int i = 0;
        set<int> st;
        for(int j=0;j<n;j++) {
            
            while(st.find(nums[j]) != st.end()) {
                cur -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            
            cur += nums[j];
            st.insert(nums[j]);
            s = max(s , cur);
        }
        
        return s;
    }
};
