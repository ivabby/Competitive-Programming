class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        bool flag = false;
        while(!q.empty()){
            queue<TreeNode*> t;
            vector<int> res;
            while(!q.empty()){
                TreeNode* r = q.front();
                q.pop();
                if(flag){
                    int v = r->val;
                    res.insert(res.begin() , v);
                } else{
                    res.push_back(r->val);
                }
                if(r->left != NULL)
                    t.push(r->left);
                if(r->right != NULL)
                    t.push(r->right);
            }
            ans.push_back(res);
            q = t;
            flag = !flag;
        }
        
        return ans;
    }
};
