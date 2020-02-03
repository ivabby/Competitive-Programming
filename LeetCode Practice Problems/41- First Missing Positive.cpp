class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> a;
        for(auto i : nums)
            a.insert(i);
        
        for(int i=1;;i++)
            if(a.find(i) == a.end())
                return i;
        
        return 1;
    }
};
