class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& a) {
        int n = a.size() , i = 0;
        int f[100001] = {0};
        
        vector<int> ans;
        queue<int> q;
        q.push(0);
        
        while(!q.empty())
        {
            
            queue<int> t;
            if(i != n-1)
            {
                i++;
                t.push(i);
            }
            while(!q.empty())
            {
                int v = q.front();
                q.pop();
                ans.push_back(a[v][f[v]]);
                f[v]++;
                if(f[v] != a[v].size())
                    t.push(v);
            }
            q = t;
        }
        
        
        return ans;
    }
};
