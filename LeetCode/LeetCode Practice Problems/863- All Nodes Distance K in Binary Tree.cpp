class Solution {
public:
    map<TreeNode* , TreeNode*> m;
    void dfs(TreeNode* r,TreeNode* p)
    {
        if(r != NULL)
        {
            m[r] = p;
            dfs(r->left , r);
            dfs(r->right , r);
        }
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        
        dfs(root , NULL);
        
        queue<TreeNode*> q;
        q.push(target);
        
        set<TreeNode*> s;
        s.insert(target);
        s.insert(NULL);
        
        int dis = 0;
        
        while(!q.empty())
        {
            if(dis == K)
            {
                vector<int> ans;
                while(!q.empty())
                {
                    ans.push_back(q.front()->val);
                    q.pop();
                }
                return ans;
            }
            queue<TreeNode*> t;
            while(!q.empty())
            {
                TreeNode* r = q.front();
                q.pop();
                if(s.find(r->left) == s.end())
                {
                    s.insert(r->left);
                    t.push(r->left);
                }
                if(s.find(r->right) == s.end())
                {
                    s.insert(r->right);
                    t.push(r->right);
                }
                
                TreeNode* p = m[r];
                if(s.find(p) == s.end())
                {
                    s.insert(p);
                    t.push(p);
                }
            }
            
            q = t;
            dis++;
            
        }
        
        return {};
        
    }
};
