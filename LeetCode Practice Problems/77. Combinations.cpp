class Solution {
public:
    vector<vector<int>> ans;
    void find(int i,int k,vector<int> a,int n)
    {
        if(k == 0)
        {
            ans.push_back(a);
            return;
        }
        for(int j=i+1;j<=n;j++)
        {
            a.push_back(j);
            find(j,k-1,a,n);
            a.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        find(0,k,{},n);
        return ans;
    }
};
