class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)
            return {};
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            queue<TreeNode*> t;
            while(!q.empty())
            {
                TreeNode* now = q.front();
                q.pop();
                if(q.empty())
                    ans.push_back(now->val);
                
                if(now->left != NULL)
                    t.push(now->left);
                if(now->right != NULL)
                    t.push(now->right);
            }
            q = t;
        }
        
        return ans;
    }
};
