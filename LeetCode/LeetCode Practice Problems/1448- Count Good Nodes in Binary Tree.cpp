class Solution {
public:
    int goodNodes(TreeNode* root) {
        int ans = 0;
        if(root == NULL) return 0;
        
        queue<int> q1;
        queue<TreeNode*> q2;
        
        q1.push(root->val);
        q2.push(root);
        
        while(!q1.empty()) {
            int val = q1.front();
            q1.pop();
            TreeNode* t = q2.front();
            q2.pop();
            
            if(val <= t->val) ans++;
            if(t->left != NULL) {
                q1.push(max(val , t->val));
                q2.push(t->left);
            }
            if(t->right != NULL) {
                q1.push(max(val , t->val));
                q2.push(t->right);
            }
        }
        
        return ans;
    }
};
