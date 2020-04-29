class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        for(auto i : arr)
            m[i]++;
        
        set<int> s;
        for(auto i : m)
        {
            if(s.find(i.second) != s.end()) return false;
            s.insert(i.second);
        }
        
        return true;
    }
};
