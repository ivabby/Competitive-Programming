class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        if(root == NULL)
            return 0;
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            queue<TreeNode*> t;
            while(!q.empty()){
                TreeNode* r = q.front();
                q.pop();
                if(r->val%2 == 0)
                {
                    sum+=find(r , 0);
                }
                if(r->left != NULL)
                    t.push(r->left);
                if(r->right != NULL)
                    t.push(r->right);
            }
            q = t;
        }
        
        return sum;
    }
    
    int find(TreeNode* root , int cnt)
    {
        if(root == NULL)
            return 0;
        if(cnt == 2)
            return root->val;
        
        return find(root->left , cnt + 1) + find(root->right , cnt + 1);
    }
};
