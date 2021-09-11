class Solution {
public:
    int solve(TreeNode* r,int val) {
        if(r != NULL) {
            int v = solve(r->right , val);
            if(v != 0) val = 0;
            r->val += v + val;
            int l = solve(r->left , r->val);
            return (l == 0)?r->val:l;
        }
        return 0;
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        solve(root , 0);
        return root;
    }
};
