class Solution {
public:
    TreeNode* head;
    TreeNode* insert(TreeNode* h,int v)
    {
        if(h == NULL)
        {
            TreeNode* r = new TreeNode(v);
            return r;
        }
        
        if(h->val < v)
            h->right = insert(h->right , v);
        else
            h->left = insert(h->left , v);
        
        return h;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        for(auto i : preorder)
            head = insert(head , i);
        
        return head;
    }
};
