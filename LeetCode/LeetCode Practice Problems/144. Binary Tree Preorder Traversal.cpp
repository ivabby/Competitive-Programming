class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL)
            return ans;
        
        ans.push_back(root->val);
        if(root->left != NULL)
            ans = preorderTraversal(root->left);
        
        if(root->right != NULL)
            ans = preorderTraversal(root->right);
        
        return ans;
    }
};
