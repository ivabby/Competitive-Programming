class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        set<int> cur,ans;
        int n = arr.size();
        
        for(auto i: arr) {
            set<int> cur2;
            for(auto j: cur)
                cur2.insert(j | i);
            cur2.insert(i);
            cur = cur2;
            
            for(auto j: cur) ans.insert(j);
        }
        
        return ans.size();
        
    }
};
