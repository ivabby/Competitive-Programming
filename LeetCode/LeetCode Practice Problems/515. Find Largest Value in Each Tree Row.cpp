class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        
        if(root == NULL)
            return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int maxi = INT_MIN;
            queue<TreeNode*> t;
            while(!q.empty())
            {
                TreeNode* n = q.front();
                q.pop();
                
                maxi = max(maxi , n->val);
                if(n->left != NULL)
                    t.push(n->left);
                if(n->right != NULL)
                    t.push(n->right);
            }
            ans.push_back(maxi);
            q = t;
        }
        return ans;
    }
};
