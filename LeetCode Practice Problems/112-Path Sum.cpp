class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL)
        {
            return false;
        }
        
        if(root->left == NULL && root->right == NULL)
        {
            return (sum-root->val == 0)?true:false;
        }
        
        bool flag = false;
        if(root->left != NULL)
            flag = hasPathSum(root->left , sum - root->val);
        if(root->right != NULL)
            flag = flag || hasPathSum(root->right , sum - root->val);
        
        return flag;
    }
};
