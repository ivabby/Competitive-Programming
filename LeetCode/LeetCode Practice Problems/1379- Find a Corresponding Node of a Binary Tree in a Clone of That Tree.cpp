class Solution {
public:
    TreeNode* node;
    
    void check(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original == NULL) {
            return;
        }
        
        if(original == target) {
            node = cloned;
            return;
        }
        
        check(original->left,cloned->left,target);
        check(original->right,cloned->right,target);
    }
    
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        check(original,cloned,target);
        return node;
    }
};
