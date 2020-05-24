class Solution {
public:
    TreeNode* head;
    
    TreeNode* insert(TreeNode* h,int v)
    {
        if(h == NULL)
        {
            TreeNode* t = new TreeNode(v);
            return t;
        }
        
        
        if(h->val > v)
            h->left = insert(h->left , v);
        else
            h->right = insert(h->right , v);
        
        return h;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        for(auto i : preorder)
            head = insert(head , i);
        
        return head;
    }
};
