class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        
        for(int i=1;i<=n;i++)
            ans.push_back(i);
        
        sort(ans.begin() , ans.end() , [&](int c,int d){
            string s1 = to_string(c);
            string s2 = to_string(d);
            
            return s1<=s2;
        });
        
        return ans;
    }
};
