class Solution {
public:
    int minJumps(vector<int>& a) {
        unordered_map<int,vector<int>> m;
        int n = a.size();
        for(int i=0;i<n;i++){
            m[a[i]].push_back(i);
        }
        
        vector<bool> vis(n);
        queue<int> q;
        q.push(0);
        int step = 0;
        vis[0] = true;
        while(!q.empty()){
            for(int j=q.size();j>0;j--){
                int i = q.front();
                q.pop();
                
                if(i == n-1)
                    return step;
                vector<int>& next = m[a[i]];
                next.push_back(i-1);
                next.push_back(i+1);
                for(int k : next)
                    if(k>=0 && k<n && !vis[k])
                    {
                        vis[k] = true;
                        q.push(k);
                    }
                next.clear();
            }
            step++;
        }
        
        return 0;
    }
};
