class Solution {
public:
    void inorder(TreeNode* root, vector<int>& v) {
        if(root == NULL) return;
        inorder(root->left , v);
        v.push_back(root->val);
        inorder(root->right , v);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* t = new TreeNode(0);
        TreeNode* cur = t;
        
        vector<int> v;
        inorder(root , v);
        
        for(auto i: v) {
            cur->right = new TreeNode(i);
            cur = cur->right;
        }
        t = t->right;
        return t;
    }
};
