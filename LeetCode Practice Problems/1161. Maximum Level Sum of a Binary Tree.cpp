class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level = 1 , maxi = root->val;
        int cur = 0;
        while(!q.empty())
        {
            queue<TreeNode*> t;
            int s = 0;
            cur++;
            while(!q.empty())
            {
                TreeNode* r = q.front();
                q.pop();
                s+=r->val;
                if(r->left != NULL)
                    t.push(r->left);
                
                if(r->right != NULL)
                    t.push(r->right);
            }
            cout<<cur<<" "<<s<<" "<<maxi<<"\n";
            q = t;
            if(s > maxi)
            {
                level = cur;
                maxi = s;
            }
        }
        
        return level;
    }
};
