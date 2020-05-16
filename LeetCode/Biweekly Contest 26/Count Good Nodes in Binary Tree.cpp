class Solution {
public:
    int cnt = 0;
    
    void dfs(int maxi , TreeNode* r)
    {
        if(r == NULL)
            return;
        
        if(r-> val >= maxi) cnt++;
            
        dfs(max(maxi , r->val) , r->left);
        dfs(max(maxi , r->val) , r->right);
    }
    
    int goodNodes(TreeNode* root) {
        dfs(INT_MIN , root);
        
        return cnt;
    }
};
