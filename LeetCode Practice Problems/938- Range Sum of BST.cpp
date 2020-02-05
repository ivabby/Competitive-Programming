class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root == NULL)
            return 0;
        int s = 0;
        if(root->val >= L && root->val <= R)
            s = root->val;
        
        s+=rangeSumBST(root->left , L , R);
        s+=rangeSumBST(root->right , L , R);
        
        return s;
    }
};
