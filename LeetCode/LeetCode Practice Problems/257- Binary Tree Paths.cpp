class Solution {
public:
    vector<string> a;
    void find(TreeNode* root,string s) {
        string t = to_string(root->val);
        s = (s.length() > 0)?(s+"->"):"";
        if(root->left == NULL && root->right == NULL) {
            a.push_back(s+t);
        
            return;
        }
        
        if(root->left != NULL) {
            find(root->left , s+to_string(root->val));
        }
        if(root->right != NULL)
            find(root->right , s+to_string(root->val));
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        find(root,"");
        return a;
    }
};
