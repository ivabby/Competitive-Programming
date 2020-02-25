class BSTIterator {
public:
    vector<int> a;
    int i = 0;
    BSTIterator(TreeNode* root) {
        queue<TreeNode*> q;
        if(root != NULL)    
            q.push(root);
        while(!q.empty())
        {
            TreeNode* t = q.front();
            a.push_back(t->val);
            q.pop();
            if(t->left != NULL)
                q.push(t->left);
            if(t->right != NULL)
                q.push(t->right);
        }
        sort(a.begin() , a.end());
    }
    
    /** @return the next smallest number */
    int next() {
        int v = a[i];
        // remove(a.begin());
        i++;
        return v;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(a.size() == i)
            return false;
        return true;
    }
};
