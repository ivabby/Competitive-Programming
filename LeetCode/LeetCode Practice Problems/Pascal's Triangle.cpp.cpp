class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows == 0) return ans;
        vector<int> a;
        a.push_back(1);
        ans.push_back(a);
        for(int i=2;i<=numRows;i++)
        {
            a.clear();
            a.push_back(1);
            for(int j=0;j<ans[i-2].size()-1;j++)
            {
                a.push_back(ans[i-2][j] + ans[i-2][j+1]);
            }
            a.push_back(1);
            ans.push_back(a);
        }
        return ans;
    }
};
