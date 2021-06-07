class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        for(auto i: nums) m[i]++;
        
        int ans = 0 , cur = 0 , prev = 0;
        for(auto i: m) {
            if(cur == 0) {
                cur = 1;
                prev = i.first;
            } else {
                if(prev+1 == i.first) {
                    cur++;
                } else {
                    cur = 1;
                }
                prev = i.first;
            }
            
            ans = max(ans , cur);
        }
        
        return ans;
    }
};
