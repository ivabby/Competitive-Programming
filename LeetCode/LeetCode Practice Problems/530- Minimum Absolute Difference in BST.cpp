class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        vector<int> a;
        
        while(!q.empty())
        {
            TreeNode* t = q.front();
            q.pop();
            a.push_back(t->val);

            if(t->left != NULL)
                q.push(t->left);
            if(t->right != NULL)
                q.push(t->right);
        }
        
        sort(a.begin() , a.end());
        int mini = abs(a[1] - a[0]);
        for(int i=1;i<a.size();i++)
            mini = min(mini , abs(a[i] - a[i-1]));
        
        return mini;
    }
};
