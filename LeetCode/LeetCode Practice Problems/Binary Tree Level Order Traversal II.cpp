class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans , res;
        
        if(root == NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            queue<TreeNode*> t;
            vector<int> v;
            while(!q.empty())
            {
                TreeNode* r = q.front();
                q.pop();
                v.push_back(r->val);
                
                if(r->left != NULL)
                    t.push(r->left);
                if(r->right != NULL)
                    t.push(r->right);   
            }
            q = t;
            ans.push_back(v);
        }
        
        for(int i=ans.size() - 1;i>=0;i--)
            res.push_back(ans[i]);
        
        return res;
    }
};
