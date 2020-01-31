class Solution {
public:
    int minDepth(TreeNode* root) {
        int cnt = 0;
        if(root == NULL)
            return cnt;
        
        queue<TreeNode*> q;
        q.push(root);
        cnt++;
        while(!q.empty())
        {
            queue<TreeNode*> t;
            while(!q.empty()){
                TreeNode* r = q.front();
                q.pop();
                if(r->left == NULL && r->right == NULL)
                    return cnt;
                if(r->left != NULL)
                    t.push(r->left);
                if(r->right != NULL)
                    t.push(r->right);
            }
            
            cnt++;
            q = t;
        }
        return cnt;
    }
};
