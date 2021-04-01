class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int n = nums.size();
        
        map<int,int> m;
        for(int i=0;i<n;i++) {
            int index = (long)nums[i] / ((long)t+1);
            
            if(nums[i]<0 && nums[i]%((long)t+1) != 0) index--;
            
            if(m.find(index) != m.end()) return true;
            else{
                m[index] = nums[i];
                if(m.find(index+1) != m.end() && abs((long)m[index+1] - (long)nums[i]) <= t) return true;
                if(m.find(index-1) != m.end() && abs((long)m[index-1] - (long)nums[i]) <= t) return true;
                
                if(m.size() > k) {
                    int val = (long)nums[i-k]/((long)t+1);
        
                    if(nums[i-k]<0 && nums[i-k]%((long)t+1) != 0) val--;
                    
                    m.erase(val);
                }
            }
        }
        
        return false;
    }
};
