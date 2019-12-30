class Solution {
public:
    set<vector<int>> a;
    void find(map<int,int> m,int tot,vector<int> path)
    {
        if(tot == 0)
        {
            a.insert(path);
            return;
        }
        for(auto i : m)
        {
            if(i.second == 0)
                continue;
            m[i.first]--;
            path.push_back(i.first);
            find(m,tot-1,path);
            m[i.first]++;
            path.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map<int,int> m;
        int tot = nums.size();
        for(auto i : nums)
            m[i]++;
        find(m,tot,{});
        vector<vector<int>> ans;
        for(auto i : a)
            ans.push_back(i);
        return ans;
    }
};
