class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int cur = 0 , maxi = INT_MIN;
        
        for(auto i : A)
        {
            maxi = max(maxi , cur + i);
            cur = max(0 , cur + i);
        }
        
        cur = 0;
        int mini = INT_MAX;
        int s = 0;
        
        for(auto i : A)
        {
            s += i;
            mini = min(cur + i , mini);
            cur = min(0 , cur+i);
        }
        if(s == mini) return maxi;
        return max(maxi , s-mini);
    }
};
