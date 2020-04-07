class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int,int> m;
        for(auto i : arr)
            m[i]++;
        
        int ans = 0;
        for(auto i : m)
        {
            if(m.find(i.first+1) != m.end())
                ans+=i.second;
        }
        
        return ans;
    }
};
