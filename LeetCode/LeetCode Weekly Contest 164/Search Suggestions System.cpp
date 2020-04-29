class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin() , products.end());
        vector<vector<string>> ans(searchWord.length());
        int k = 0;
        
        for(int i=0;i<products.size();i++)
        {
            for(int j=0;j<searchWord.length();j++)
            {
                if(searchWord[j] == products[i][j])
                {
                    if(ans[j].size() < 3)
                        ans[j].push_back(products[i]);
                }
                else
                    break;
            }
        }
        return ans;
    }
};
