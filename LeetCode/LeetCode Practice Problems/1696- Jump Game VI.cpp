class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size();
        long cur = 0;
        deque<int> dq;
        
        for(int i=n-1;i>=0;i--) {
            cur = nums[i] + (dq.empty()?0:nums[dq.front()]);
            
            while(!dq.empty() && cur > nums[dq.back()])
                dq.pop_back();
            
            dq.push_back(i);
            if(dq.front() >= i+k)
                dq.pop_front();
            
            nums[i] = cur;
        }
        
        return cur;
        
    }
};
