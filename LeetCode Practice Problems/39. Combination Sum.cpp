class Solution {
public:
    vector<vector<int>> ans;
    void find(vector<int> a,vector<int> path,int index,int target)
    {
        if(target < 0) return;
        if(target == 0)
        {
            ans.push_back(path);
            return;
        }
        
        for(int i=index;i<a.size();i++)
        {
            int v = a[i];
            path.push_back(v);
            find(a,path,i,target - v);
            path.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> p;
        find(candidates , p,0,target);
        return ans;
    }
};
