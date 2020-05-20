class Solution {
public:
    int p = 0 , ans;
    void find(TreeNode* r,int k)
    {
        if(r->left != NULL)
            find(r->left , k);
        p++;
        if(p == k)
            ans = r->val;
        if(r->right != NULL)
            find(r->right , k);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        find(root , k);
        return ans;   
    }
};
