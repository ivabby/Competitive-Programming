class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
        for(int i=1;i<=rowIndex;i++)
        {
            vector<int> a;
            a.push_back(1);
            for(int j=0;j<ans.size()-1;j++)
            {
                a.push_back(ans[j] + ans[j+1]);
            }
            a.push_back(1);
            ans = a;
        }
        
        return ans;
    }
};
