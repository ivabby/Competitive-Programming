class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,vector<int>> m;
        
        for(int i=0;i<list1.size();i++)
            m[list1[i]].push_back(i);
        
        for(int i=0;i<list2.size();i++)
            m[list2[i]].push_back(i);
        
        vector<string> ans;
        int maxi = INT_MAX;
        
        for(auto i : m)
        {
            vector<int> s = i.second;
            sort(s.begin() , s.end());
            bool ok = false;
            
            for(int j=1;j<s.size();j++)
            {
                int diff = s[j] + s[j-1];
                if(diff < maxi)
                {
                    ans.clear();
                    maxi = diff;
                }
                if(diff == maxi)
                    ok = true;
            }
            
            if(ok) ans.push_back(i.first);
        }
        
        return ans;
    }
};
