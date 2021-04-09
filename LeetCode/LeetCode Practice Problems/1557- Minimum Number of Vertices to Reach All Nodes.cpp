class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> a;
        vector<int> seen(n,0);
        
        for(auto i: edges) {
            seen[i[1]] = 1;
        }
        
        for(int i=0;i<n;i++) {
            if(seen[i] == 0)
                a.push_back(i);
        }
        
        return a;
    }
};
