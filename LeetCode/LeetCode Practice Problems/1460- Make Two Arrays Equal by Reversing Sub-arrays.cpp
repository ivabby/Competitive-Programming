class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> m;
        
        for(auto i: target) m[i]++;
        
        for(auto i: arr) m[i]--;
        
        for(auto i: m)
            if(i.second != 0)
                return false;
        
        return true;
    }
};
