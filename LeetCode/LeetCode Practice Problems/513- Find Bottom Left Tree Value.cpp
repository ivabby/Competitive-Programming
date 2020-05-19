class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        int ans = root->val;
        
        while(!q.empty())
        {
            queue<TreeNode*> t;
            bool f = true;
            while(!q.empty())
            {
                TreeNode* n = q.front();
                q.pop();
                
                if(n->left != NULL)
                {
                    if(f)   ans = n->left->val;
                    t.push(n->left);
                    f = false;
                }
                if(n->right != NULL)
                {
                    if(f) ans = n->right->val;
                    t.push(n->right);
                    f = false;
                }
            }
            q = t;
        }
        
        return ans;
    }
};
