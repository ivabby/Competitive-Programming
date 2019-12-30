class Solution {
public:
    set<vector<int>> ans;
    void find(vector<int> c,vector<int> p,int target,int index)
    {
        if(target == 0)
        {
            ans.insert(p);
            return;
        }
        for(int i=index+1;i<c.size();i++)
        {
            if(target - c[i] < 0)
                continue;
            p.push_back(c[i]);
            find(c,p,target - c[i],i);
            p.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> p;
        sort(candidates.begin() , candidates.end());
        find(candidates,p,target,-1);
        vector<vector<int>> a;
        for(auto i : ans)
            a.push_back(i);
        return a;
    }
};
