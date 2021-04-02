class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size();
        stack<int> s;
        
        int mx = INT_MIN;
        
        for(int i=n-1;i>=0;i--) {
            if(nums[i] < mx) return true;
            
            while(!s.empty() && s.top()<nums[i]) {
                mx = s.top();
                s.pop();
            }
            
            if(mx < nums[i]) s.push(nums[i]);
        }
        
        
        return false;
        
    }
};
