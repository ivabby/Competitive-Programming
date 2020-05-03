class Solution {
public:
    int find(TreeNode* r)
    {
        if(r == NULL)
            return 0;
        return max(find(r->left) , find(r->right)) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        
        int left = find(root->left);
        int right = find(root->right);
        
        int maxi = max(diameterOfBinaryTree(root->left) , diameterOfBinaryTree(root->right));
        
        return max(left+right , maxi);
    }
};
