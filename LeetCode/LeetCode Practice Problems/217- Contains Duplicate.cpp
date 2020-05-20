class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto i : nums)
        {
            if(s.find(i) != s.end())
                return true;
            s.insert(i);
        }
        return false;
    }
};
