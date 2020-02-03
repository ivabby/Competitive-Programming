class Solution {
public:
    bool find(TreeNode* leftTree,TreeNode* rightTree)
    {
        if(leftTree == NULL && rightTree == NULL)
            return true;
        if(leftTree == NULL || rightTree == NULL)
            return false;
        if(leftTree->val != rightTree->val)
            return false;
        
        bool ans = find(leftTree->left , rightTree->right) && find(leftTree->right , rightTree->left);
        return ans;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return find(root->left , root->right);
    }
};
