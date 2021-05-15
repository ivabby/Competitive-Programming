class Solution {
public:
    vector<int> t1,t2;
    
    void traverse(TreeNode* root) {
        if(root == NULL) {
            return;
        }
        
        if(root->left == NULL && root->right == NULL) {
            t1.push_back(root->val);
        }
        
        traverse(root->left);
        traverse(root->right);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        traverse(root1);
        t2 = t1;
        t1.clear();
        traverse(root2);
        
        if(t1.size() != t2.size()) {
            return false;
        }
        
        for(int i=0;i<t1.size();i++) {
            if(t1[i] != t2[i]) {
                return false;
            }
        }
        
        return true;
    }
};
