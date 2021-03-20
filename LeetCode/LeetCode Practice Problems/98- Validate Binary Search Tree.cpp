class Solution {
public:
    
    bool valid(TreeNode* root,long mn,long mx) {
        if(root == NULL) {
            return true;
        }
        
        if(root->val <= mn || root->val >= mx) {
            return false;
        }
        
        return valid(root->left , mn , root->val) && valid(root->right , root->val , mx);
        
    }
    
    bool isValidBST(TreeNode* root) {
        return valid(root,LONG_MIN,LONG_MAX);
    }
};
