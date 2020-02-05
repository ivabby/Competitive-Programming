class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root == NULL)
            return NULL;
        
        TreeNode* left = removeLeafNodes(root->left , target);
        TreeNode* right = removeLeafNodes(root->right , target);
        TreeNode* r = new TreeNode(root->val);
        
        if(left == NULL && right == NULL)
        {
            if(r->val == target)
                r = NULL;
        }
        
        if(r != NULL)
        {
            r->left = left;
            r->right = right;
        }
        
        return r;
    }
};
