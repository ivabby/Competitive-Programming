class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> m;
        
        for(auto i: edges) {
            m[i[0]]++;
            m[i[1]]++;
        }
        
        int ans = -1;
        for(auto i:m) {
            if(i.second == m.size()-1) {
                ans = i.first;
                break;
            }
        }
        
        return ans;
    }
};
