class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n < 2) {
            vector<int> ans;
            for(int i=0;i<n;i++) {
                ans.push_back(i);
            }
            return ans;
        }
        
        map<int,set<int>> m;
        for(auto i:edges) {
            m[i[0]].insert(i[1]);
            m[i[1]].insert(i[0]);
        }
        
        vector<int> leaf;
        for(auto i:m) {
            if(i.second.size() == 1) 
                leaf.push_back(i.first);
        }
        
        int leftNode = n;
        while(leftNode > 2) {
            leftNode -= leaf.size();
            vector<int> newLeaf;
            
            for(auto i: leaf) {
                int next = *m[i].begin();
                
                m[next].erase(i);
                if(m[next].size() == 1) 
                    newLeaf.push_back(next);
            }
            leaf = newLeaf;
        }
        
        return leaf;
    }
};
