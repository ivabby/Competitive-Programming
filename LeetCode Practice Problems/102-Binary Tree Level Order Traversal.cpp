class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            queue<TreeNode*> t;
            vector<int> res;
            while(!q.empty()){
                TreeNode* r = q.front();
                q.pop();
                if(r->left != NULL)
                    t.push(r->left);
                if(r->right != NULL)
                    t.push(r->right);
                
                res.push_back(r->val);
            }
        
            ans.push_back(res);
            q = t;
        }
        
        return ans;
    }
};
