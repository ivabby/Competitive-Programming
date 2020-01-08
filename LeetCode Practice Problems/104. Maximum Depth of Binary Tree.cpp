class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        if(root == NULL)
            return 0;
        q.push(root);
        int c = 0;
        
        while(!q.empty())
        {
            c++;
            queue<TreeNode*> t;
            while(!q.empty())
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left != NULL)
                    t.push(temp->left);
                if(temp->right != NULL)
                    t.push(temp->right);
            }
            q = t;
        }
        
        return c;
    }
};
