class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(root == NULL)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        
        int sum = 0;
        while(!q.empty())
        {
            queue<TreeNode*> t;
            int s = 0;
            while(!q.empty())
            {
                TreeNode* r = q.front();
                q.pop();
                s = s + r->val;
                if(r->left != NULL)
                    t.push(r->left);
                if(r->right != NULL)
                    t.push(r->right);
            }
            if(t.empty())
                return s;
            q = t;
        }
        
        return sum;
    }
};
