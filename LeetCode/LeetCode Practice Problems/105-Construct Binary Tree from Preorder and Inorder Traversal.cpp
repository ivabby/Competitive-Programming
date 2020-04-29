class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(inorder.size() == 0)
            return NULL;
        
        int rootVal = preorder[0];
        preorder.erase(preorder.begin());
        
        auto rootIndex = find(inorder.begin() , inorder.end() , rootVal);
        
        vector<int> nextLeft(inorder.begin() , rootIndex);
        vector<int> nextRight(rootIndex+1 , inorder.end());
        
        TreeNode* root = new TreeNode(rootVal);
        root->left = buildTree(preorder , nextLeft);
        root->right = buildTree(preorder , nextRight);
        
        return root;
    }
};
