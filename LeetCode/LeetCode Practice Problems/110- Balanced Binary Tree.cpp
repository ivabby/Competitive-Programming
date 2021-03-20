class Solution {
public:
    bool flag = true;
    int find(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        
        int left = find(root->left);
        int right = find(root->right);
        
        if(abs(left - right) > 1) {
            flag = false;
        }
        
        return max(left , right) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        flag = true;
        
        find(root);
        
        return flag;
    }
};
